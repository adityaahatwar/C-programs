# include <stdio.h>
int main ( )
{
	int size=5;


	for(int i=0; i<size; i++){
        for(int k=0; k<i+1; k++){
			printf("*");
		}
		for(int j=0; j<2*(size-i-1); j++){
		    printf(" ");
		}
		for(int k=0; k<i+1; k++){
			printf("*");
		}
		printf("\n");
	}
    for(int i=size-1; i>=0; i--){
        for(int k=0; k<i+1; k++){
			printf("*");
		}
		for(int j=0; j<2*(size-i-1); j++){
			printf(" ");
		}
		for(int k=0; k<i+1; k++){
			printf("*");
		}
		printf("\n");
	}
}