public class girl{
	private String girlName;

	public void setName(String name){
		girlName = name;
	}

	public String getName(){
		return girlName;
	}

	public void saying(){
		System.out.printf("The girl name is %s", getName());
	}

}