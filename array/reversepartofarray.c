// #include<stdio.h>
// void reverse(int arr[],int a,int b){
//    for(int i=a,j=b;i<=j;i++,j--){
//     int temp=arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//    }
  
//     return;
// }
// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     //suppose we have to reverse from 2nd index to 5th index
//     reverse(arr,2,5);
//     for(int i=0;i<7;i++){
//             printf("%d ",arr[i]);
       
      
//         }
//     return 0;
// }

#include<stdio.h>

int main(){
    int arr[7] = {4,5,7,8,9,52,5};
    for(int i=2,j=5;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]= arr[j];
        arr[j] =temp;
    }
    for(int i=0;i<7;i++){
            printf("%d ",arr[i]);
       
      
        }
    return 0;
}

