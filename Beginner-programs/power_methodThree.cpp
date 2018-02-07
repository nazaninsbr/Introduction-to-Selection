#include <iostream>
#include <math.h>
using namespace std;
int Cal_power(int base, float power)
{
	if(power==1)
		return base; 
	if(power==0)
		return 1;
	return Cal_power(base, floor(power/2))*Cal_power(base, ceil(float(power/2)));
}
int main()
{
	int base;
	float power;
	cout<<"Please enter the base and the power: ";
	cin>>base>>power;
	cout<<endl<<"The result is :"<<Cal_power(base, power)<<'\n';
	return 0;
}