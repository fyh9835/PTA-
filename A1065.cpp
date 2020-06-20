#include<stdio.h>
int main(){
	long long a,b,c,d;
	int i,n,sss;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lld%lld%lld",&a,&b,&c);
		d=a+b;
		if(a>0&&b>0&&d<0){
			sss=1;
		}else if(a<0&&b<0&&d>=0){
			sss=0;
		}else if(d>c){
			sss=1;
		}else{
			sss=0;
		}
		if(sss==1){
			printf("Case #%d: true\n",i);
		}else{
			printf("Case #%d: false\n",i);
		}
		
	
	}
	
	return 0;
} 
