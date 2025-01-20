#include <stdio.h>
#include<limits.h>
int main(){

int arr[7] = {5,8,4,6,4,7,8};
int max = INT_MIN;
int smax = INT_MIN;

    // for(int j=0;j<7;j++){
    // if(max<arr[j])
    // max=arr[j];
    // }
    //  for(int j=0;j<7;j++){
    // if(arr[j]!=max && smax<arr[j])
    // smax=arr[j];
    // }

    // second method
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i]  && max!=arr[i]){
            smax = arr[i];
        }
    }
    printf("The second largest number in the array is :%d",smax);
        
    return 0; 
}