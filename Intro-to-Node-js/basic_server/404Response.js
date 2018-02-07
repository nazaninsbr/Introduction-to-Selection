var http = require('http');


function send404Response(request, response){
	console.log("User made a request to: "+ request.url);
	response.writeHead(404, {"Context-Type": "text/plain"});
	response.write("there seems to be a problem:(");
	response.end();
};
