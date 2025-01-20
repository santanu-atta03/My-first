#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int x = 9;
    int idx = -1;
    bool flag = false;
    for(int i=0;i<=5;i++){
        if(arr[i]==x){
            flag=true;
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index %d",x,idx);
    }
    return 0;
}