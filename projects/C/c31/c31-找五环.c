#include<stdio.h>
#include<string.h>

int main(void){
    int i;
    char *color[5] ={"red", "blue","yellow","green", "black"};
    char str[20];
    printf("input a color:");
    scanf("%s", str);
    for(i=0; i<5;i++){
        if(strcmp(str, color[i])==0){
            break;
        }
    }



    return 0;
}
