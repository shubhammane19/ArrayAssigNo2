#include<stdio.h>

void main(){

	int size;
	printf("Enter Size: ");
	scanf("%d", &size);
	int arr[size];
	
	printf("Enter Arr Elements: ");
	for(int i=0; i<size; i++){
	
		scanf("%d", &arr[i]);

		if(arr[i] > 5){
	
			printf("Age should not be greater than 5, Re-Enter the Age: ");
			i--;
			continue;
		}
	}
	printf("********************************************\n");

	for(int i=0; i<size; i++){
	
		printf("%d\n", arr[i]);
	}
}
