#include<stdio.h>
int main(){
	int array[3][3];
	for(int i = 0;i<3;i++){
		for (int j = 0;j<3;j++){
			printf("Nhap vao cac phan tu array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int j=0;j<3;j++){
	    for(int i = 0;i<3;i++){
				for(int k = 0;k<2-i;k++){
				if(array[k][2-k]>array[k+1][1-k]){
					int temp = array[k][2-k];
					array[k][2-k]=array[k+1][1-k];
					array[k+1][1-k]=temp;
				}
			}
		}
	}
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}