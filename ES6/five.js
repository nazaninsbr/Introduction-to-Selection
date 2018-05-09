"user strict";
class Person{
	constructor(name, age, weight){
		this.name = name;
		this.age = age;
		this.weight = weight;
	}

	printWeight(){
		console.log(this.weight);
	}
}

let nazanin = new Person('Nazanin', 21, 1397);
nazanin.printWeight()