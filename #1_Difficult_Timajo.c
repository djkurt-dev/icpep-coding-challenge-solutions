#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Timajo, Kurt Vincent

void checkDouble(char* token){
	int i;
	while(token != NULL){
		int hasDouble = 0;
		for(i=0; i< strlen(token); i++){
			if(token[i] == token[i+1]){
				printf("YES ");
				hasDouble=1;
			}
			if((i == (strlen(token)-1)) && (hasDouble == 0)){
				printf("NO ");
			}
		}
		token = strtok(NULL, " ");
	}
}

void main(){
	int n,i,j;
	char str[100], *token, ent;
	
	printf("Number of cases: ");
	scanf("%d", &n);
	
	ent = getchar();
	
	char strCases[20][100];
	int cases = n;
	for(i=0; i<cases; i++){
		printf("Input the case %d string: ", i+1);
		gets(strCases[i]);
	}
	
	printf("\n\n");
	for(i=0; i<cases; i++){		
		printf("Case #%d: ", (i+1));	
		token = strtok(strCases[i], "  ");	
		checkDouble(token);
		printf("\n");
	}
}