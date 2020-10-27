#include <stdio.h>
#include "hamtrungbinhcong.h"
int main(){
	int n;
	printf("nhap so:");
	scanf("%d",&n);
	int arr[n];
	float x;
	x=TrungBinhCong(arr,n);
	printf("%f",x);
}
