#include <iostream>
using namespace std;
int Cal_power(int base, int power)
{
	int result = 1;
	for(int i=1; i<=power; i++)
		result *= base;
	return result;
}
int main()
{
	int base, power;
	cout<<"Please enter the base and the power: ";
	cin>>base>>power;
	cout<<endl<<"The result is :"<<Cal_power(base, power)<<'\n';
	return 0;
}