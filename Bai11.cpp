// #include <stdio.h>
// #include <math.h>
 
 
// bool snt(int a){
//     if(a < 2) return false;
//     for(int i = 2; i <= sqrt(a); ++i){
//         if(a % i == 0) return false;
//     }
//     return true;
// }
 
// void NhapMang(int a[], int n){
//     for(int i = 0;i < n; i++){
//         printf("Nhap so thu %d: ", i);
//         scanf("%d", &a[i]);
//     }
// }
 
// void XuatMang(int a[], int n){
//     for(int i = 0;i < n; i++){
//         printf("%4d", a[i]);
//     }
// }
 
// int DemSNT(int a[], int n){
//     int cnt = 0;
//     for(int i = 0; i < n; i++)
//    {
//      if(snt(a[i])){
//          cnt++;
//      }
//    }
//    return cnt;
// }
 
// int main(){
//     int a[100];
//     int n;
//     printf("\nNhap so luong phan tu: ");
//     scanf("%d", &n);
//     NhapMang(a, n);
//     XuatMang(a, n);
    
//     printf("\nMang co %d SNT!", DemSNT(a, n));
    
// }


#include<stdio.h>
#include<math.h>
//find prime and count prime in array
void input(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("input number %d: ", i);
        scanf("%d", &a[i]);
    }
};

void output (int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%4d", &a[i]);
    }
};

bool prime (int a){
    if (a < 2){
        return false;
    };
    for (int i = 2; i < sqrt(a); i++){
        if (a % i == 0){
            return false;
        }
    };
    return true;
}

int count (int a[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (prime(a[i])){
            count ++;
        }
    }
    return count;
}


int main (){
    int a[100];
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    input (a ,n);
    output (a, n);
    printf("\nMang co %d SNT!", count(a, n));
};

