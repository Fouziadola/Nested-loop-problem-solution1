#include<stdio.h>
void main(){
    int n,i,j,a=0,b=1,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    a=0;
    b=1;
        printf("%d",b);

    for(j=1;j<i;j++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    printf("\n");}
}

