#include<stdio.h>
int main(){
    int arr[6] = {1,2,4,5,8,4};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
        if(arr[i]==arr[j]){
            printf("Here the duplicate element is %d ",arr[i]);
            break;
            }
        }
    }
    return 0;
}