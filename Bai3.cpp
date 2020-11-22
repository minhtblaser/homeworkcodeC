#include<stdio.h>
//output follow by pattern
int main (){
    int n;
    int split;
    int s = 0;
    printf("enter a number: ");
    scanf ("%d", &n);
    for (;n != 0;){
        split = n % 10;
        s += split;
        n /= 10;
    }
    printf(" S = %d",s);
}

