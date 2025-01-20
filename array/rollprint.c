#include<stdio.h>
int main(){
    int marks[10] = {95,56,25,40,32,89,75,28,99,84};
    
    for(int i=0;i<=9;i++){
    if(marks[i]<35)
    printf("%d ",i);
    }
    return 0;
}