#include <iostream>
using namespace std;
int mandelbort(int n, int c)
{
	if(n==0)
		return c;
	int k;
	k= mandelbort(n-1, c);
	return (k*k)+c;
}
int main()
{
	int c, n;
	cout<<"Please enter the number of the element you want and the constant c: ";
	cin>>n>>c;
	cout<<"The value is: "<<mandelbort(n, c)<<endl;
	return 0;
}