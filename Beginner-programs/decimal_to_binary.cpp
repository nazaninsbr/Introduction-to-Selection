#include <iostream>
using namespace std;
int convert_to_binary(int decimal)
{
	int binary=0; 
	int digit=0;
	int power=1;
	while(decimal!=0)
	{
		if(decimal>=2){
			digit = decimal%2;
			binary += digit*power;
			power *= 10;
			decimal /=2;
		}
		else{
			binary += decimal*power;
			decimal=0;
		}
	}
	return binary;
}
int main()
{
	int number;
	cout<<"Please enter your number: ";
	cin>>number;
	cout<<"The binary equivalent is: "<<convert_to_binary(number)<<endl;
	return 0;
}