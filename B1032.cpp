#include<stdio.h>
int main(){
	int a,b=0,c=0;
	scanf("%d",&a);
	int k[a+1]={0};
	for(int i=1;i<=a;i++){
		scanf("%d%d",&b,&c);
		k[b]+=c;
	}
	int max1=0,max2=0;
	for(int f=1;f<=a;f++){
		if(k[f]>max2){
			max1=f;
			max2=k[f];	
		}
	
	}
	printf("%d %d",max1,max2);
	return 0;
}
