#include<stdio.h>
int main(){
int i,j;
    for(i=1;i<10;i+=2){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("/n");
    }
}


