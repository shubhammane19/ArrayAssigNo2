#include<stdio.h>

void main(){

    int n;
    scanf("%d", &n);
    char arr[n];

    printf("Enter array elements:\n");
    for(int i=0; i<n; i++){

        scanf(" %c", &arr[i]);
    }

    for(int i=0; i<n; i++){

        printf("%d\n", arr[i]);
    }
}