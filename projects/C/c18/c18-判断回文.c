#include<stdio.h>


int main(void){

    int i,n,m;
    char s[10];

    printf("输入一个字符串:\n");
    i =0;

    while( (s[i]= getchar() ) != '\n'){
        i++;
    }
    s[i] = '\0';
    for(n=0, m=i-1; n<m;n++, m--){
        if(s[n]!=s[m]){
            break;
        }
    }
    if(n>=m){
        printf("是回文\n");
    }
    else{
        printf("不是回文\n");
    }

    return 0;
}