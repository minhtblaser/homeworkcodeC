#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
void findSum(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    findSum(n,a);
    return 0;
}
void enter(int &n, int a[]){
    printf("enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        printf("enter the number a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void printValue(int n, int a[]){
    for(int i = 1; i<=n; i++){
        printf("%4d", a[i]);
        if(i % 10 == 0){
            printf("\n");
        }
    }
}
void findSum(int n, int a[]){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += a[i];
    }
    printf("\nthe sum of array is %d", sum);
}