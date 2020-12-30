#include <stdio.h>
void NhapMaTran(int a[][100], int m, int n);
void XuatMaTran(int a[][100], int m, int n);
void findpositionOfMin(int a[][100], int m, int n);
void findpositionOfMax(int a[][100], int m, int n);
int Max (int a[100][100], int n, int m);
bool isCheckTriangleMaxtrix (int a[][100], int n, int m);

void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
int Max (int a[100][100], int n, int m){
   int temp = a[0][0];
   for(int i = 0;  i < m; i++){
      for(int j = 0; j < n;j++){
         if(temp < a[i][j]){
            temp = a[i][j];
         }
      }
   }
   return temp;
}

int main(){
   int a[100][100];
   int m,n;
   printf("nhap so cot n = "); scanf("%d",&n);
   printf("nhap so hang m = "); scanf("%d",&m);
   printf("nhap vao ma tran:\n");
   NhapMaTran(a, m , n);
   XuatMaTran(a, m, n);
   printf("\nthe max number in matrix is %d", Max(a,n,m));
   printf("\nthe min number in matrix is %d", Min(a,n,m));
}


