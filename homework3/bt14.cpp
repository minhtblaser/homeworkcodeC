#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
void checkArray(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    checkArray(n,a);
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
void checkArray(int n, int a[]){
    int count  = 0;
    for (int i = 0; i<n; i++){
        if(a[i+1] > a[i]){
            count ++;
        }
    }
    if(count == n){
        printf("\nArray is increasing");
    } else {
        printf("\nArray is not increasing");
    }
}