#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
void multi_Average(int n, int a[]);
void sum_Average(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    multi_Average(n,a);
    sum_Average(n,a);
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
void sum_Average(int n, int a[]){
    float tbc = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
    }
    tbc += (float) sum / n;
    printf("\nthe sum _average is %.2f", tbc);
}
void multi_Average(int n, int a[]){
    float tbc = 0;
    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum *= a[i];
    }
    tbc += (float) sum / n;
    printf("\nthe multi_average is %.2f", tbc);
}