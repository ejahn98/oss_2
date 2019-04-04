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
  
char* binarized(int n){
	char bin[MAX_SIZE];
	char temp;
	char* result;
	int count=0;
	int remainder=n;
	while (n!=0){
		remainder=n%2;
		n /= 2;
		bin[count] = remainder+'0';
		count++;
	}
	bin[count]='\0';
	for (int i=count-1; i>=count/2; i--){	       
		temp=bin[i];
		bin[i]=bin[count-1-i];
		bin[count-1-i]=temp;
	}
	result=bin;
	printf("binary>");
	for(int i=0; i<count; i++){
	printf("%c",bin[i]);

}
	printf("\n");
	return result;
}

#if 0
int main(){
	char input[MAX_SIZE];

	fgets(input, sizeof(input), stdin);
 
	int reverse = reverse_digits(atoi(input));
	char* bin= binarized(atoi(input));

	printf("reverse> %d\n", reverse);
	printf("binary> %s\n", bin);	
		
	return 0;
}
#endif
