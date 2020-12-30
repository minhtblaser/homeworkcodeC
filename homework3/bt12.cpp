#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
void printSum(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    printSum(n,a);
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
    }
}
void printSum(int n, int a[]){
    int sum = 0;
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(a[i] > 0){
            count++;
            sum += a[i];
        }
    }
    printf("sum is %d", sum);
    printf("the amount of positive numbers is %d", count);
}