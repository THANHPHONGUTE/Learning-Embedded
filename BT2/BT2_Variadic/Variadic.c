#include <stdio.h>
#include <stdarg.h>

typedef struct {
    int Kq_Max;
    int Kq_Min;
} KQ_Max_Min_t;

KQ_Max_Min_t Max_Min(int n, ...){

    va_list ptr;
    va_start(ptr, n);

    int min = va_arg(ptr, int);
    int max = min;

    for(int i=1 ; i<n ; i++){
       int temp = va_arg(ptr, int);
        if(min > temp) {
            min = temp;
        }

        if(max < temp) {
            max = temp;
        }
    }
    va_end(ptr);

    KQ_Max_Min_t Ketqua;

    Ketqua.Kq_Max = max;
    Ketqua.Kq_Min = min;

    return Ketqua;
}

double GTTB(int n, ...){
    double sum = 0;
    va_list ptr;
    va_start(ptr, n);
    for(int i=0 ; i<n ; i++){
        sum += va_arg(ptr, double);
    }
    va_end(ptr);
    double TB = sum/n;
    return TB;
}

int main() {

    KQ_Max_Min_t Ketqua = Max_Min(5, 7, 3, 8, 10, 5);
    printf("Max = %d\n", Ketqua.Kq_Max);
    printf("Min = %d\n", Ketqua.Kq_Min);

    double kq = GTTB(5, 2.1, 2.2, 2.3, 2.4, 2.5);
    printf("GTTB: %.2f", kq);

    return 0;
}