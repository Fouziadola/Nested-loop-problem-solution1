#include<stdio.h>
void main(){
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }


}
