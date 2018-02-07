int max_two(int a, int b){
	if(a>b)
		return a; 
	return b;
}

int max_three(int a, int b, int c){
	return max_two(a, max_two(b, c));
}