#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
     printf("\n");
    }

}
