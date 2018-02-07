function User(){
	this.name = "";
	this.life = 100;
	this.givelife = function givelife(targetPlayer){
		targetPlayer.life += 1;
		this.life -=1;
		console.log(this.name + " gave 1 life to "+ targetPlayer.name);
	};
};



var Nazanin = new User();
var Bita = new User();
Nazanin.name = "Nazanin";
Bita.name = "Bita";


Bita.givelife(Nazanin);


console.log("Nazanin life: " + Nazanin.life + " Bita life: " + Bita.life);


User.prototype.fight = function fight(targetPlayer){
		targetPlayer.life -=3;
		console.log(targetPlayer.name + " fighted with "+ this.name);
};



Bita.fight(Nazanin);

console.log("Nazanin life: " + Nazanin.life + " Bita life: " + Bita.life);