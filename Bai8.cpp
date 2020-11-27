    #include<stdio.h>
    void nhap(int &a, int &b);
    int timUSCLN(int a, int b);// khai báo nguyên mẫu hàm
    void xuat(int a,int b);
    int main(){
        int a,b;
        nhap(a,b);
        xuat(a,b);
        return 0;
    }
    void nhap(int &a, int &b){
        printf("nhap a: ");
        scanf("%d", &a);
        printf("nhap b: ");
        scanf("%d", &b);
    }
    int timUSCLN(int a, int b){
        // đặt một lính canh
        int uscln = 1;// mọi số đều có ước số chung là 1
        // ước số chung của 2 số a,b luôn nhỏ hơn hoặc bằng số nhỏ hơn
        // ví dụ: 3,6--> usc = 3<=3
        // e tìm bất cứ ví dụ nào khác nữa cũng đều vậy
        //=> tìm số nhỏ hơn
        int min = a>b?b:a;
        for(int i=min;i>1;i--){// dùng vòng lặp giảm, lớn nhất là min, nhỏ nhất là 1.
            if(a%i==0 && b%i==0){// thấy số i mà cả 2 số đều chia hết -->đó là số cần tìm, break thoát ra
                uscln = i;
                break;
            }
        } 
        return uscln;
    }
    void xuat(int a, int b){
        int uscln = timUSCLN(a,b); 
        printf(" USCLN la %d", uscln);// biến viết thường, không viết hoa

    }
