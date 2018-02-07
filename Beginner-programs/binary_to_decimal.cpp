#include <iostream>
using namespace std;
int convert_to_decimal(int binary)
{
	int decimal=0; 
	int digit=0; 
	int power=1;
	while(binary!=0)
	{
		digit = binary%10;
		decimal += digit*power;
		power*=2;
		binary /=10;
	}
	return decimal;
}
int main()
{
	int number;
	cout<<"Please enter your number: ";
	cin>>number;
	cout<<"The decimal equivalent is: "<<convert_to_decimal(number)<<endl;
	return 0;
}