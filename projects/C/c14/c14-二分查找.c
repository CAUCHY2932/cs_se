/*
 * c14-二分查找.c
 *
 *  Created on: May 12, 2019
 *      Author: young
 */
//二分查找必须是有序数组
//测试78，给出了下标8
#include<stdio.h>

int main(void){
	int a[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int low, high, mid, n = 10, x;

	printf("输入x:\n");
	scanf("%d", &x);

	low = 0;
	high = n-1;

	while(low<high){
		mid = (low+high)/2;
		if(x==a[mid]){
			break;
		}
		else if(x<a[mid]){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	if(low<=high){
		printf("下标是：%d\n",mid);
	}
	else{
		printf("not found\n");
	}

	return 0;
}
