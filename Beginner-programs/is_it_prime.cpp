#include <iostream>
using namespace std;
bool is_it_prime(int number)
{
	int divisable=0;
	if(number==1)
		return false;
	if(number==2 || number==3)
		return true;
	for(int i=2; i<number; i++)
	{
		if(number%i==0)
			divisable +=1;
	}
	if(divisable==0)
		return true;
	return false;
}
int main()
{
	int number;
	cout<<"Please enter your number: ";
	cin>>number;
	if(is_it_prime(number))
		cout<<"Your number is prime."<<endl;
	else 
		cout<<"Your number is not prime"<<endl;
	return 0;
}