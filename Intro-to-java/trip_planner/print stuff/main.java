import java.util.Scanner;

class main{
	public static void main(String[] args){


		String name;
		Scanner input = new Scanner(System.in);
		user myUser = new user();



		myUser.printMessageToGetName(input);
		myUser.printGreetings();
		myUser.makeATrip(input);

		myUser.printInfo();

	}
}