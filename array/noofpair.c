#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count=0;
    int arr[8] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==n) {
        count++;
        printf("(%d,%d)\n",arr[i],arr[j]);
        }
        }
      
    }
   
        printf("%d ",count);
   
    return 0;
}