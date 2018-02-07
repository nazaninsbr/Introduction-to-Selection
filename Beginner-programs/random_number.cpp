#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int random_num;
	srand(time(NULL));
	random_num = rand()%100;
	cout<<random_num<<'\n';
	return 0;
}