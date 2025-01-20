#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<=n-1;i++){
        printf("Enter element :");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++){
    printf("%d ",arr[j]);
    }
    return 0;
}