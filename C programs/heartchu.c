# include <stdio.h>
int main ()
{
	int row = 7, col = 7;

	for(int r=0; r<row; r++){
		for(int c=0; c<col; c++){
			if((r==0 && c==1)||(r==0 && c==2)||(r==0 && c==4)||(r==0 && c==5)||(r==1 && c==0)||(r==1 && c==6)||(r==1 && c==3)||(r==2 && c==0)||(r==2 && c==6)||(r==3 && c==1)||(r==3 && c==5)||(r==4 && c==2)||(r==4 && c==4)||(r==5 && c==3)){
				printf(" vd ");
            }
			else{
				printf("   ");
			}
		}printf("\n");
	}
}