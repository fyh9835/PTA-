#include<stdio.h>
int main(){
	int a,a1,b,b1,a2=0,b2=0,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a,&a1,&b,&b1);
		if(a1==b1){
			continue;
		}
		else if(a1==a+b){
			b2++;
		}else if(b1==a+b){
			a2++;
		}
	}
	printf("%d %d",a2;b2);
	return 0 ;
} 
