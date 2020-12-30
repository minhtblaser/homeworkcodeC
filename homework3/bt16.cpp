#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
void findNumbers(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    findNumbers(n,a);
    return 0;
}
void enter(int &n, int a[]){
    printf("enter the number: ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        printf("enter the number a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}
void printValue(int n, int a[]){
      for(int i = 0; i<n; i++){
        printf("%4d", a[i]);
        if(i % 10 == 0){
            printf("\n");
        }
    }
}
void findNumbers(int n, int a[]){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i+2] == a[i]+a[i+1]){
            count++;
        }
    }
    printf("\nthe a pair of number is %d ", count);
}