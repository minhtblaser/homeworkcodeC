#include<stdio.h>
void enter(int &n, int a[], int &x);
void printValue(int n, int a[]);
void find_Number_X(int n, int a[], int x);
int main(){
    int a[100];
    int n;
    int x;
    enter(n, a, x);
    printValue(n, a);
    find_Number_X(n,a,x);
    return 0;
}
void enter(int &n, int a[], int &x){
    printf("enter the number: ");
    scanf("%d", &n);
    printf("enter the X number: ");
    scanf("%d", &x);
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
void find_Number_X(int n, int a[], int x){
    for(int i = 1; i<=n; i++){
        if(x == a[i]){
            printf("\nX(%d) exist in array",x);
        }
    }
}