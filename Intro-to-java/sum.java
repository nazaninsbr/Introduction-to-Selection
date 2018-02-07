import java.util.Scanner;

class apples{
	public static void main(String args[]){
	
		Scanner S1 = new Scanner(System.in);
		double FirstN, SecondN;
		System.out.println("Enter the first number: ");
		FirstN = S1.nextDouble();
		System.out.println("Enter the second number: ");
		SecondN = S1.nextDouble();
		System.out.println(FirstN+SecondN);
	}
}
