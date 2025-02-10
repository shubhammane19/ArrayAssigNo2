#include<stdio.h>

void main(){

	int n;
	printf("Enter Size: ");
	scanf("%d", &n);
	float arr[n];
	
	printf("Enter Elements: ");
	for(int i=0; i<n; i++){
	
		scanf("%f",&arr[i]);

		while(arr[i] > 6.0 || arr[i] < 5.0){
		
			printf("Height should not be greater than 6ft and less than 5ft, re-enter height: ");
			scanf("%f",&arr[i]);
		}	
	}

	printf("***********************************************\n");
	for(int i=0; i<n; i++){
	
		printf("%f\n", arr[i]);
	}
}
