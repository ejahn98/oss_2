#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "21700602.h"
#include "21700416.h"
#define MAX 2048
#include <stdbool.h>
int reverse_digits(int n);
int sort_digits(int n);
_Bool isPrime(int n);
char* binarized(int n);
int main(){
	char input[MAX];
	int i, is_number,reverse,sort;

	while (fgets(input, sizeof(input), stdin) !=NULL){
		input[strlen(input) -1]=0;

		if(strcmp(input, "quit") == 0){
			break;
		}

		for (i=0; i<strlen(input); i++){
			if(!isdigit(input[i])){
				printf("Entered input is not a number\n");
				is_number=0;
				break;
			}
		}

		if(is_number){
			reverse=reverse_digits(atoi(input));
			sort=sort_digits(atoi(input));
			_Bool bf=isPrime(atoi(input));
			printf("reverse> %d\n", reverse);
			printf("sort> %d\n", sort);
			if(bf)
				printf("isPrime> True\n");
else
				printf("isPrime> False\n");
			binarized(atoi(input));

		}
	}
	return 0;
}
