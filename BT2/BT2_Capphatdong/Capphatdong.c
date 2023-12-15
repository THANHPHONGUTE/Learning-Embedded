/* xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
Viết chương trình quản lý mảng bằng cấp phát động, tổng số phần tử mảng đủ sài, linh động theo số lượng phần tử hiện dùng. 
Triển khai hàm nhập, xuất, thêm, sửa, xóa tại vị trí bất kỳ.
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int length;
    int *a;
}Array_t;

Array_t arr;

void Khoitao(void){
    printf("Nhap so luong phan tu: ");
    scanf("%d", &arr.length);

    arr.a = (int *)malloc(arr.length * sizeof(int));
}

void Nhap(void)
{
    printf("Nhap gia tri cua mang: \n");
    for(int i=1;i<=arr.length;i++){
        printf("%d. ",i);
        scanf("%d", arr.a + i);
        }
}

void Xuat(void)
{
    printf("\nCac gia tri cua mang: ");;
    for(int i=1;i<=arr.length;i++){
        printf("%d  ",*(arr.a+i));
    }
    printf("\n");
}

void Them(void)
{
    int n, new;

    do{
        printf("\nNhap vi tri them: ");
        scanf("%d", &n);
    }while(n>(arr.length+1));

    arr.length++;
    arr.a = (int *)realloc(arr.a, arr.length * sizeof(int));

    printf("Nhap gia tri them moi: ");
    scanf("%d", &new);

    for(int i=arr.length;i>=n;i--){
        *(arr.a+i) = *(arr.a+(i-1));
    }

    *(arr.a+n) = new;
}

void Xoa(void)
{
    int n,p;
    do{
        printf("\nNhap vi tri xoa: ");
        scanf("%d", &n);
    }while(n>arr.length);

    for(int i=n;i<=(arr.length-1);i++){
        *(arr.a+i) = *(arr.a+(i+1));
    }
    arr.length--;
}

void Sua(void)
{
    int n,p;
    do{
        printf("\nNhap vi tri sua: ");
        scanf("%d", &n);
    }while(n>arr.length);

    printf("Nhap gia tri moi: ");
    scanf("%d", arr.a + n);

}

int main(){

    Khoitao();
    Nhap();
    
    int x;
    do{
        printf("\n---- Option----");
        printf("\n1. Xuat mang: ");
        printf("\n2. Them gia tri vao mang: ");
        printf("\n3. Xoa gia tri trong mang: ");
        printf("\n4. Sua gia tri trong mang: ");
        printf("\n5. Thoat chuong trinh");
        printf("\n->Nhap vi tri: ");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                Xuat();
                break;
            
            case 2:
                Them();
                break;

            case 3:
                Xoa();
                break;

            case 4:
                Sua();
                break;
        default:
            printf("Ket thuc chuong trinh");
            break;
        }
    }while(x != 0);
    

    free(arr.a);
    return 0;
}