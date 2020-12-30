#include<stdio.h>
#include<math.h>
bool check(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int count_PrimeNumbers(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (check(a[i])){
            count++;
        }
    }
    return count;
}
void input(int a[], int n) {
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
       printf("enter the number a[%d]: ", i+1);
       scanf("%d", &a[i]);
    }
}
int main() {
    int a[1000];
    int n;
    input(a,n);
    printf("the amount of prime numbers is %d", count_PrimeNumbers(a,n));
    return 0;
}