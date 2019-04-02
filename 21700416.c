#include <stdio.h>
#include <stdlib.h>
#include "21700416.h"
#define MAX_SIZE 2048

int sort_digits(int n){
	int number[MAX_SIZE];
	int result1=0;
	int count ;
	int temp ;
	for(int i=0; i<MAX_SIZE; i++) {
		number[i]=n%10;
		if(n==0 && n/10==0)
		break;
	
	n/=10;
	count =i;
}

for(int i=0; i<count ; i++){
	for(int j=0; j<count -i; j++){
		if(number[j] > number[j+1]){
			temp=number[j];
			number[j]=number[j+1];
			number[j+1]=temp;
}
}
}
for (int i=0; i<count+1; i++){
	result1*=10;
	result1+=number[i];
}
return result1;
}
