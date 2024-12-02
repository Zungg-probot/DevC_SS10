#include<stdio.h>
int main(){
	int array[5]={5,6,2,3,7};
	for(int i=0;i<5-1;i++){
		for(int j = 0;j< 5-i-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",array[i]);
	}
}
