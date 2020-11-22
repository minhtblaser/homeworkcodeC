#include<stdio.h>
//time
#include<stdio.h>
int main(){
	int gio=0,giay=0,phut=0;
	printf("Nhap so giay :");
	scanf("%d",&giay);
	if(giay<60)
        printf(" %d gio %d phut %d giay",gio,phut,giay);
    else if(giay>=60&&giay<3600){
        phut=(giay-giay%60)/60;
        giay%=60;
        printf(" %d gio %d phut %d giay",gio,phut,giay);
    }
    else{
        gio=(giay-giay%3600)/3600;
        phut=((giay%3600)-(giay%3600)%60)/60;
        giay=giay-phut*60-gio*3600;
        printf("%d gio %d phut %d giay",gio,phut,giay);
    }
	return 0;
}