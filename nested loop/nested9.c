#include<stdio.h>
void main(){
    int i,j;
    for(i=0;i<=5;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=(5-i);j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
