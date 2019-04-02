#include <stdio.h>
#include <stdlib.h>
#include "21700602.h"
#define MAX_SIZE 2048


int reverse_digits(int n){
	int num[MAX_SIZE];
	int result=0;
	int count;

	for (int i=0; i<MAX_SIZE; i++){
	num[i]=n%10;
	if( n==0 && n/10==0)
		break;
	n=n/10;
	count = i;
	}


	for (int i=0; i<count+1 ; i++){
		result*=10;
		result+=num[i];

	}

	return result;
}


#if 0
int main(){
	char input[MAX_SIZE];

	fgets(input, sizeof(input), stdin);
 
	int reverse = reverse_digits(atoi(input));

	printf("reverse> %d\n", reverse);
	
	
	return 0;
}
#endif
