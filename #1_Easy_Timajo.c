#include <stdio.h>

//Timajo, Kurt Vincent

void main(){
	int n, revd=0, remder, len=0,check;
	printf("Input an integer (Min of 4, Max of 10): ");
	scanf("%d", &n);
	
	check = n;
	while(check != 0 ){
		check = check /10;
		len++;
	}
	
	if(len >= 4 && len <= 10){
		while (n != 0){
			remder = n % 10;
			revd = revd * 10 + remder;
			n /= 10;
		}
		printf("Reversed = %d", revd);
	}
	else{
		printf("Length of integer n must be greater than 4 and less than 10");
	}
}