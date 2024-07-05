# include <stdio.h>
int main ()
{
	int row = 6, col = 7;

	for(int r=0; r<row; r++){
		for(int c=0; c<col; c++){
			if(r==0 && c%3!=0){
				printf(" * ");
			}else if(r==1 && c%3==0){
				printf(" * ");
			}else if(r-c==2){
				printf(" * ");
			}else if(r+c==8){
				printf(" * ");
			}else{
				printf("   ");
			}
		}printf("\n");
	}
}