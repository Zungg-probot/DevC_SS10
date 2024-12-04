#include<stdio.h>
int main(){
	int array[12]={2,5,1,7,6,4,9,3,10,13,15,18};
	for(int i=0;i<11;i++){
		for(int j = 0;j<11-i;j++){
			if(array[j]>array[j+1]){
				int temp = array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	int n;
	printf("Nhap vao gia tri bat ky: ");
	scanf("%d",&n);
	int l=0,r=11;
	int mid;
	while(l<=r){
		mid = (l+r)/2;
		if(array[mid]<n){
			l = mid +1;
		}else if(array[mid]>n){
			r = mid -1;
		}else{
			printf("Phan tu %d o vi tri %d",n,mid);
			break;
		}
	}
}
