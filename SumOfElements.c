#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Array Size :");
    scanf("%d",&a);
    int arr[a];
    printf("Enter your Elements :");
    int sum=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        sum =sum+arr[i];
    }
        printf("%d",sum);
        
    return 0;
}