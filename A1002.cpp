#include<stdio.h>
int main(){
	int a1,m,max=0;
	double a2;
	double sum[1111]={0};
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %lf",&a1,&a2);
		sum[a1]+=a2;
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d %lf",&a1,&a2);
		sum[a1]+=a2;
	}
	for(int i=0;i<1111;i++){
		if(sum[i]){
			max++;
		}
	}
	printf("%d",max);
	for(int i=1111-1;i>=0;i--){
		if(sum[i])
	printf(" %d %.1f",i,sum[i]);
	} 	
	return 0;
}

