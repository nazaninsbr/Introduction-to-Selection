var connect = require('connect');
var http = require('http');


var app = connect();


function doFirst(request, response, next){
	console.log("request sent");
	next();
};

function doSecond(request, response, next){
	console.log(":)))))))");
};


app.use(doFirst);
app.use(doSecond);

http.createServer(app).listen(3000);
console.log("server is running...");