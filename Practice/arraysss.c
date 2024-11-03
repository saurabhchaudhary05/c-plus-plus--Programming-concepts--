//39649503792
//SBIN0010313
#include<stdio.h>
int main(){
	int a[3][2],b[3][2],c[3][2];
	int i ,j;
	for(i=0;i<3;i++){
		for(i=0;i<2;i++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(i=0;i<2;i++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(i=0;i<2;i++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(i=0;i<2;i++){
			printf("%d",c[i][j]);
		}
	}
}
