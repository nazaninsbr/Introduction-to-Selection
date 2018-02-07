var http = require('http');
var fs = require('fs');


function send404Response(request, response){
	console.log("User made a request to: "+ request.url);
	response.writeHead(404, {"Context-Type": "text/plain"});
	response.write("there seems to be a problem:(");
	response.end();
};


function onRequest(request, response){
	if(request.method=='GET' && request.url=='/'){
		response.writeHead(200, {"Context-Type": "text/html"});
		fs.createReadStream("./style.html").pipe(response);
	}else{
		send404Response(request, response);
	}
};

http.createServer(onRequest).listen(3000);

console.log("Server is running....");
