#include<stdio.h>
//output = number follow by pattern
int main()
{
    int thousand,hundred, ten, unit;
   
    printf("\n + Hang nghin: ");
    scanf("%d",&thousand);
 
    printf("\n + Hang tram: ");
    scanf("%d",&hundred);
 
    printf("\n + Hang chuc: ");
    scanf("%d",&ten);

    printf("\n + Hang don vi: ");
    scanf("%d",&unit);
 
    printf("\nyour number is here: %d%d%d%d",thousand,hundred,ten,unit);
    return 0;
}
