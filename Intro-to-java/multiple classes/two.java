import java.util.Scanner;
class apple{

	public static void main(String args[]){
		Scanner S1 = new Scanner(System.in);
		name nameObject = new name();

		System.out.println("Enter your name: ");
		String userName = S1.nextLine();
		nameObject.printName(userName);
	}
}