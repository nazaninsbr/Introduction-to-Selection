import java.util.Scanner;
class wallet{
	private float money;
	private String currency;
	private float exchangeToDollarRate;

	wallet(){}
	void getParameters(Scanner n){

		System.out.print("How much money are you going to take with you? ");
		money = n.nextFloat();
		n.nextLine();
		System.out.print("What is the curreny of this counrty?");
		currency = n.nextLine();
		System.out.print("How many "+currency+" are there in a USD? ");
		exchangeToDollarRate = n.nextFloat();

	}
	void dailySpending(int nDays){
		System.out.println("if you are travelling for "+nDays+" days, you can spend an average of "+money/nDays+" daily.");
	}
}

class trip{
	private String destination;
	private int numberOfDays;
	private float timeDifference;

	void getParameters(Scanner n){

		System.out.print("Where are you going? ");
		destination = n.nextLine();
		System.out.print("How many days are you staying there? ");
		numberOfDays = n.nextInt();
		System.out.print("What is the time difference in hours? ");
		timeDifference = n.nextFloat();

	}
	int getNDays(){
		return numberOfDays;
	}
	
}


public class user{
	private String name;
	private trip oneTrip;
	private wallet myWallet;

	user(String n){
		name = n;
	}
	user(){}
	void setName(String n){
		name = n;
	}
	String getName(){
		return name;
	}
	void printGreetings(){
		System.out.println("Nice to meet you "+name);
	}
	void printMessageToGetName(Scanner n){
		System.out.print("What is your name? ");
		name = n.nextLine();
	}
	void makeATrip(Scanner n){
		oneTrip = new trip();
		myWallet = new wallet();


		oneTrip.getParameters(n);
		myWallet.getParameters(n);
		myWallet.dailySpending(oneTrip.getNDays());
	}
}