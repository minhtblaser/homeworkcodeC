#include<stdio.h>
void enter(int &n, int a[]);
int arrNumbersdecrease(int n, int a[]);
void printValue(int n, int a[]);
int arrNumbersIncrease(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    arrNumbersdecrease(n,a);
    printValue(n, a);
    arrNumbersIncrease(n,a);
    printValue(n, a);
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
int arrNumbersdecrease(int n, int a[]){
    int temp;
    for(int i = 1; i<n; i++){
        for(int j = i+1; j<=n; j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return temp;
}
int arrNumbersIncrease(int n, int a[]){
    int temp;
    for(int i = 1; i<n; i++){
        for(int j = i+1; j<=n; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return temp;
}