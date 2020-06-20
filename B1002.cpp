#include<stdio.h>
int main(){
	long long a,b,c,e;
	int d=1;
	scanf("%d",&e);
	for(d;d<=e;d++){
		while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF){
			if(a+b>c){
			printf("Case #%d: true\n",d++);	
			}else{
			printf("Case #%d: false\n",d++);
			}
		}
	}
	
	return 0;
}

