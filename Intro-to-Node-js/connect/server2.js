var connect = require('connect');
var http = require('http');


var app = connect();


function profile(request, response){
	console.log("user requested profile");
}

app.use('/profile', profile);

http.createServer(app).listen(3000);
console.log("server is running...");