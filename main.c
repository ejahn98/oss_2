#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "21700602.h"
#define MAX 2048

int reverse_digits(int n);
int sort_digits(int n);
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
			printf("reverse> %d\n", reverse);
			printf("sort> %d\n", sort);
		}
	}
	return 0;
}
