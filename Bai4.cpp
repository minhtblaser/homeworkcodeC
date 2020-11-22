#include<stdio.h>
//ouput: reserve a string number
int main(){
    int n;
    int a;
    int s = 0;
    printf ("enter a string number: ");
    scanf("%d", &n);
    for (;a != 0;){
        a = n%10;
        n /= 10;
        s = s*10 + a;
    }
    printf("S = %d",s/10);
}