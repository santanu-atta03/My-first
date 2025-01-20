//#include<stdio.h>
// int main(){
//     int arr[7] = {4,5,7,8,9,52,5};
//     //int brr[6];
//     for(int i=0;i<6;i++){
//        // brr[i] = arr[5-i];
//        }
//         for(int i=0;i<=6;i++){
//             printf("%d ",arr[6-i]);
//         }
//     return 0;

// }

//second method
#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=6;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7] = {4,5,7,8,9,52,5};
    reverse(arr);
    for(int i=0;i<7;i++){
            printf("%d ",arr[i]);
       
      
        }
    return 0;
}
