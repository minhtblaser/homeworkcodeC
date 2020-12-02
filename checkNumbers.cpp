// Counts how many pairs of numbers in a sequence of n elements where the number following is the sum of the two preceding numbers.
#include <stdio.h>
#define MAX 100 
void input (int a[], int &n);
void output (int a[], int n);
int isApairNumber (int a[], int n);
int main(){
	int n;
	int a[MAX];
	input(a,n);
	output(a,n);
	printf("\n the number of a pair: %d", isApairNumber(a,n));
	return 0;
}
void input (int a[], int &n){
	printf("enter the number: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("enter number a[%d]: ",i);
		scanf("%d", &a[i]);
	}
}
void output (int a[], int n){
	for (int i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}

int isApairNumber (int a[], int n){
	int count = 1;
	for (int i = 0; i < n; i++){
		if (a[i] + a[i+1] == a[i+2]){
			count++;
		}
		return count;
	}
}