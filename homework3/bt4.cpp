
#include<stdio.h>
void enter(int &n, int a[]);
void printValue(int n, int a[]);
int findMaxNumber(int n, int a[]);
int findMinNumber(int n, int a[]);
void printMaxNumber(int n, int a[]);
void printMinNumber(int n, int a[]);
void printPositionOfMaxNumber(int n, int a[]);
int findPositionMaxNumber(int n, int a[]);
int main(){
    int a[100];
    int n;
    enter(n, a);
    printValue(n, a);
    printMaxNumber(n,a);
    printMinNumber(n,a);
    printPositionOfMaxNumber(n,a);
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
int findMaxNumber(int n, int a[]){
    int max_Number = a[1];
    for(int i = 1; i<=n; i++){
        if(a[i] > max_Number){
            max_Number = a[i]; 
        }
    }
    return max_Number;
}
int findPositionMaxNumber(int n, int a[]){
    int count = 1;
    int max_Number = a[1];
      for(int i = 1; i<=n; i++){
        if(a[i] > max_Number){
            count++;
        }
    }
    return count;
}
void printPositionOfMaxNumber(int n, int a[]){
    int position = findPositionMaxNumber(n,a);
    printf("\nPosition of max number : %d", position);
}
void printMaxNumber(int n, int a[]){
    int max_Number = findMaxNumber(n,a);
    printf("\nthe max number in array is %d", max_Number);
}
int findMinNumber(int n, int a[]){
    int min_Number = a[1];
    for(int i = 1; i<=n; i++){
        if(a[i] < min_Number){
            min_Number = a[i]; 
        }
    }
    return min_Number;
}
void printMinNumber(int n, int a[]){
    int min_Number = findMinNumber(n,a);
    printf("\nthe min number in array is %d", min_Number);
}

