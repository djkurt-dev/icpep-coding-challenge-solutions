#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Timajo, Kurt Vincent

void main(){
	char str[100], *token;
	
	printf("Input a string (separate by space): ");
	gets(str);
	
	//tokenize
	token = strtok(str, "  ");
	int ind = 1;
	
	while(token != NULL){
		char firstCh = toupper(token[0]);
		char theRestFromToken[100]="";
		char newStr[100]="";
		
		//get the rest of the token
		for(int i=0; i < strlen(token); i++){
			theRestFromToken[i] = token[i+1];
		}
		
		//append converted first ch to newStr
		strncat(newStr, &firstCh,1);	
		
		//concat newStr and the restFromToken	
		printf("%s ",strcat(newStr,theRestFromToken));
		token = strtok(NULL, " ");
	}	
}