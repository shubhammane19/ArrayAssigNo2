#include<stdio.h>

void main(){

	int n;
	printf("Enter Size: ");
	scanf("%d", &n);
	int arr[n];

	for(int i=0; i<n; i++){
	
		scanf("%d", &arr[i]);
	}
	
	int index;
	printf("Enter index value to which u want to print element: ");
	scanf("%d", &index);

	for(int i =0; i<index; i++){
	
		printf("%d | ", arr[i]);
	}
	printf("\n");
}
