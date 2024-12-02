#include <stdio.h>
int main(){
	int array[5]={1,6,3,4,5};
	int n;
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++){
		if(n == array[i]){
			int vitri = i;
		    printf("%d nam o vi tri thu %d trong mang",n,vitri+1);	
		}
	}
}
