#include<stdio.h>
int main(){
	int a,b,d,t=0,n,m=0,count=0;
	scanf("%d%d",&a,&b);
	int c[99];
	b=b%a;
	for(d=0;d<a;d++){
		scanf("%d",&c[d]);
	}
	int i=b;
	for(i;i>0;i--){
		printf("%d ",c[a-i]);
	}
	for(t;t<a-b;t++){
		printf("%d",c[t]);
		count++;
		if(count<a-b) printf(" ");
	}
	return 0;
}
