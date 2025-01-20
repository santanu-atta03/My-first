#include<stdio.h>
int main(){
    int arr[5] = {1,4,3,4,5};
    int x=4;
    for(int i=0;i<5;i++){
        if(x==arr[i]){
    printf("%d is present in the array and its index is %d\n",x,i);
    
    break;
        }
    }
    return 0;
}