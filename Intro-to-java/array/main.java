import java.util.Scanner;
class main{

	public static void main(String[] args){

		int x;
		int nums[]= new int[10];
		Scanner S1 = new Scanner(System.in);
		for(int i=0; i<10; i++){
			nums[i] = S1.nextInt();
		}

		for(int i=0; i<10; i++){
			System.out.println(nums[i]);
		}

	}
}