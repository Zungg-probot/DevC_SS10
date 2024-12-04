#include<stdio.h>
int main(){
	int array[6]={2,7,3,7,1};
	int n,flag = -1;
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d",&n);
	int arr[6]={};
	for(int i = 0;i<6;i++){
		if(n == array[i]){
			flag = i;
			arr[i]=flag+1;
		}
	}
	if(flag == -1){
		printf("Khong tim thay phan tu nao");
	}else{
		for(int i=0;i<6;i++){
			if(arr[i]>0){
				printf("Vi tri cua phan tu la: %d\n",arr[i]);
			}
		}
	}
}
