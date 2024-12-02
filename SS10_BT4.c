#include<stdio.h>
int main(){
	int array[]={2,5,7,3,8,9};
	int n = sizeof(array)/sizeof(array[0]);
	for(int i = 0;i<n-1;i++){
		int min = i;
		for(int j = i+1;j<n;j++){
			if(array[j]<array[min]){
				min = j;
			}
			int temp = array[min];
			array[min]=array[i];
			array[i]=temp;
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d\t",array[i]);
	}
}
