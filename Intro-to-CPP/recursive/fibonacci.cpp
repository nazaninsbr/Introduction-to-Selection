#include <iostream>
using namespace std;

int fib(int n){
	if(n<=2)
		return 1;
	return fib(n-1)+fib(n-1);
}

int main(){
	int num;
	cin>>num;
	cout<<fib(num)<<endl;
	return 0;
}

