#include<stdio.h>

void main(){

    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter Array Elements:\n");
    for(int i=0; i<n; i++){

        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){

        printf("%d ", arr[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++){

        printf("%d ", arr[n-i-1]);
    }
}