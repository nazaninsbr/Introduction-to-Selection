var Nazanin = {
	favFood: "cheese",
	favMovie: "Martion"
};


var Person = Nazanin;
Person.favFood = "salad";


console.log(Nazanin.favFood);