class main{

	public static void main(String[] args){
		double amount, price;
		price = 10000; 
		double rate = .01;


		for(int day=1; day<=20; day++){
			amount = price*Math.pow(rate+1, day);
			System.out.println(day + ": "+amount);
		}

	}
	
}