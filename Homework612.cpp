#include<stdio.h>
void arrDescendingNumber(int a[], int n);
void input (int a[], int n);
void output (int a[], int n);
void outputMaxNegativeNumber(int a[], int n);
void outputPerfectNumber(int a[], int n);
int findMaxNegativeNumber(int a[], int n);
bool isPerfectNumber (int a[], int n);
int perfectNumber (int x);
void input (int a[], int n){
   for (int i = 0; i < n; i++){
        printf("number[%d]: ", i);
        scanf("%d", &a[i]);
    } 
}
void output(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%4d", a[i]);
    }
}
void arrDescendingNumber(int a[], int n){
    int temp;
    for (int i = 0; i < n -1; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
}
int findMaxNegativeNumber(int a[], int n){
    int max_negative_number = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            max_negative_number = a[i];
                break;   
            }
        }
    for (int i = 0; i < n; i++){
        if (a[i] < 0 && a[i] > max_negative_number){
            max_negative_number = a[i];
        }
    }
    return max_negative_number;
}
void outputMaxNegativeNumber(int a[], int n){
    int negativeNumber =  findMaxNegativeNumber(a,n);
    printf("\nthe max negative number is %d", negativeNumber);
}
bool isPerfectNumber (int a[], int n){
    for(int i = 0; i < n; i++){
        if(perfectNumber(a[i]) && a[i] > 0){
            return true;
        }
    } return false;

}
int perfectNumber (int x){
    int S = 0;
    for(int i = 1; i < x; i++){
        if (x % i == 0){
            S += i;
        } 
        if (S == x){
            return 1;
        }
    }
    return 0;
}

void outputPerfectNumber(int a[], int n){
    printf("\nperfect numbers is: ");
    for (int i = 0; i < n; i++){
        if(perfectNumber(a[i])){
            printf(" %2d", a[i]);
        }
    }
}

int main(){
    int a[100];
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    input (a,n);
    arrDescendingNumber(a,n);
    printf("\nDescending number is: ");
    output (a,n);
    outputMaxNegativeNumber(a,n);
    outputPerfectNumber(a,n);
    return 0;
}  


