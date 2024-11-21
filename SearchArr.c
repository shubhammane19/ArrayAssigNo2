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

    int ele;
    printf("Enter Element to search");
    scanf("%d",&ele);

    for(int i=0; i<n; i++){
        if(arr[i] == ele){
            printf("Id %d found at index %d: ", ele,i);
        }
    }

}