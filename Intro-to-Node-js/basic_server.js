var http = require('http');


var server = http.createServer( function(req, response){
	console.log('got a request!');
	response.write('hi');
	response.end()
});


server.listen(3000);