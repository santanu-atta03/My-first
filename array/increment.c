#include<stdio.h>
int main(){
    int arr[8] = {4,5,8,9,8,4,6,3};
    for(int i=0;i<8;i++){
        if(i%2!=0) arr[i] =2*arr[i];
        else if(i%2==0) arr[i] =arr[i] +10;
    }
    for(int j=0;j<8;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}