#include <iostream>
#include <math.h>
using namespace std;
int Cal_power(int base, int power)
{
	int k;
	if(power==1)
		return base;
	if(power%2==1){
		k = Cal_power(base, floor(power/2));
		return k*k*base;
	}
	else {
		k = Cal_power(base, power/2);
		return k*k;
	}
}
int main()
{
	int base, power;
	cout<<"Please enter the base and the power: ";
	cin>>base>>power;
	cout<<endl<<"The result is :"<<Cal_power(base, power)<<'\n';
	return 0;
}