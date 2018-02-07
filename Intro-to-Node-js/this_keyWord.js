var Cat = {
	printSound: function(){
		console.log("Miou!!");
		console.log(this === Cat);
	}
};

Cat.printSound();


function doSomething(){
	console.log("doing something");
	console.log(this === Cat);
	console.log(this === global);
};


doSomething();