#include <iostream>
using namespace std;
int sum_of_digits(int number)
{
	int sum=0, digit;
	while(number!=0)
	{
		digit = number%10;
		number /=10;
		sum += digit;
	}
	return sum;
}
int main()
{
	int number;
	cout<<"Please enter a number: ";
	cin>>number;	
	cout<<endl<<"The sum of digits is: "<<sum_of_digits(number)<<endl;
	return 0;
}