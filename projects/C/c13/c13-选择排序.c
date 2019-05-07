/*
 * c13-选择排序.c
 *
 *  Created on: May 12, 2019
 *      Author: young
 */

#include<stdio.h>

int main(void){

	int i, index, k, n, temp;

	int a[10];

	printf("请输入n:\n");
	scanf("%d", &n);

	printf("输入%d个数值：\n", n);

	for(i=0;i<n;i++){
		scanf("%d", &a[i]);

	}
	for(k=0;k<n-1;k++){
		index = k;
		for(i=k+1;i<n;i++){
			if(a[i]<a[index]){
				index =i;
			}

			temp = a[index];
			a[index]= a[k];
			a[k]= temp;
		}

	}
	printf("完成排序之后的值是:\n");
	for(i=0;i<n;i++){
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}
