public class user{
	private String name;

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
	void printMessageToGetName(){
		System.out.print("What is your name? ");
	}
}