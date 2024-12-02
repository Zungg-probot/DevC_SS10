#include<stdio.h>
int main(){
	int array[3][4];
	for(int i = 0;i<3;i++){
		for (int j = 0;j<4;j++){
			printf("Nhap vao cac phan tu array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int j=0;j<4;j++){
	    for(int i = 0;i<3;i++){
				for(int k = 0;k<3-i;k++){
				if(array[k][j]>array[k+1][j]){
					int temp = array[k][j];
					array[k][j]=array[k+1][j];
					array[k+1][j]=temp;
				}
			}
		}
	}
	for(int i = 0;i<3;i++){
		for(int j = 0;j<4;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}
