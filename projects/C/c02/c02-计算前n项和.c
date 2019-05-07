#include<stdio.h>
/*
输入一个正整数，计算1-1/3+1/5-1/7..


*/

int main(){
    
    printf("请输入你想要计算的次数：\n");

    int n;
    scanf("%d", &n);
    
    // 这里也用浮点数
    double sign = 1.0;
    double sum = 0.0;

    // 注意不要直接用1除以，要用浮点数
    for(int i=1; i<=n; i++){
        sum = sum + 1.0*sign/(i*2 - 1);
        sign = sign*(-1);
    }

    printf("sum is %f\n", sum);
    
    return 0;
}

