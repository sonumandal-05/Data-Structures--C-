#include<stdio.h>
int main(){
    int arr[5], i, sum=0;
    float avg;

    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    avg = sum/5.0;

    printf("Sum=%d Avg=%.2f",sum,avg);

    return 0;
}