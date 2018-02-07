import java.util.Scanner;
public class minimum_of_two{
	public static void main(String []args) {
		Scanner reader = new Scanner(System.in);
      	System.out.println("Please enter two numbers: ");
      	int a = reader.nextInt();
      	int b = reader.nextInt();
      	if(a>b)
      		System.out.println("the minimum is: "+b);
      	else 
      		System.out.println("the minimum is: "+a);
   }
}