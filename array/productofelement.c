#include<stdio.h>
int main(){
    int n,i;
    int sum=14;
    printf("Enter n :");
    scanf("%d",&n);
    int arr[n] ;
    for(i=0;i<=n-1;i++){
        printf("Enter element :");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++){
        sum=sum*arr[j];
    }
    printf("%d ",sum);
    return 0;
}