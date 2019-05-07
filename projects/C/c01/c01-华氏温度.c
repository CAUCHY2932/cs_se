#include<stdio.h>
/*
 *  根据华氏温度的计算公式，计算100摄氏度下的华氏温度。
 *  5*(f-32)/9
 *  f是华氏温度
 */
int main(){
    int c,f;

    f=100;
    c = 5*(f-32)/9;
    printf("f=%d, c=%d", f, c);

    return 0;
}

