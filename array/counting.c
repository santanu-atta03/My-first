#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count=0;
    int arr[8] = {4,5,8,9,8,4,6,3};
    for(int i=0;i<8;i++){
        if(arr[i]>n) 
        count++;
      
    }
   
        printf("%d ",count);
   
    return 0;
}