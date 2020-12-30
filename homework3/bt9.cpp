#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
void Reverse_Array(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    Reverse_Array(n,a);
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
        }
    }
void Reverse_Array(int n, int a[]){
    for(int i = n-1; i >=0; i--){
        printf("\n%d", a[i]);
    }
}