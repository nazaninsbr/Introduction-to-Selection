#include <iostream>
using namespace std;
int Cal_power(int base, int power)
{
	if(power==1)
		return base;
	else 
		return base*Cal_power(base, power-1);
}
int main()
{
	int base, power;
	cout<<"Please enter the base and the power: ";
	cin>>base>>power;
	cout<<endl<<"The result is :"<<Cal_power(base, power)<<'\n';
	return 0;
}