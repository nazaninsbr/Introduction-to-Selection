import java.util.Scanner;
class apple{

	public static void main(String args[]){
		Scanner S1 = new Scanner(System.in);
		girl girlObject = new girl();

		System.out.println("Enter a girl name: ");
		String userName = S1.nextLine();
		girlObject.setName(userName);
		girlObject.saying();
	}
}