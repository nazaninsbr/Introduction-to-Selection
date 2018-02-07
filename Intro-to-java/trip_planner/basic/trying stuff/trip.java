public class trip{
	private String destination;

	trip(String destName){
		destination = destName;
	}
	trip(){}
	void printQuestion(){
		System.out.print("Where are you going?");
	}
	void printAnswer(){
		System.out.println("Great! "+destination+" sounds like a great trip");
	}
}