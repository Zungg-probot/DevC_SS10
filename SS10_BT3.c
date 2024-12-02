#include<stdio.h>
int main(){
	int arr[]={2,5,4,1,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 1;i<n;i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1]=arr[j];
			j = j-1;
		}
		arr[j+1]=key;
	}
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}
