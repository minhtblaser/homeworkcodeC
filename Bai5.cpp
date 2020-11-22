#include<stdio.h>
//output = date/month/year
int main()
{
    int dd,mm,yyyy;
   
    printf("\n + Ngay: ");
    scanf("%d",&dd);
 
    printf("\n + Thang: ");
    scanf("%d",&mm);
 
    printf("\n + Nam: ");
    scanf("%d",&yyyy);
 
    printf("\nNgay thang nam vua nhap la: %2d/%2d/%2d",dd,mm,yyyy%100);
    return 0;
}


