#include <stdio.h>
int main(){
int n,i,j;
printf("Enter n :");
scanf("%d",&n);
int arr[n] ;
    for(i=0;i<=n-1;i++){
    printf("Enter element :");
    scanf("%d",&arr[i]);

    }
    int max=arr[0];
    for( j=0;j<=n-1;j++){
    if(max>arr[j])
    max=arr[j];
    }
    printf("%d",max);
        
    return 0; 
}