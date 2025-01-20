#include<stdio.h>
int main(){
    int sum1=0;
    int sum2=0;
    int arr[5] = {4,5,8,9,10};
    for(int i=0;i<5;i++){
        if(i%2!=0) sum1=arr[i]+sum1;
        else if(i%2==0) sum2 =arr[i] +sum2;
    }
        printf("%d ",sum2-sum1);
   
    return 0;
}