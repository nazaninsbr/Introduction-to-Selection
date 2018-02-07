#include <iostream>
using namespace std;
int main()
{
	int random_num;
	int guess = -1;
	srand(time(NULL));
	random_num = rand()%100;
	while(guess != random_num)
	{
		cout<<endl<<"Please enter your guess: ";
		cin>>guess;
	}
	cout<<endl<<"Well done!";
	return 0;
}