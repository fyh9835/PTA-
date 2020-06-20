#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c,d;
	int m,n=0,j,k=0,t=0,q=0;
	if(scanf("%lld%lld%lld%lld",&a,&b,&c,&d)){
		while(a>10){
		m=a%10;
		if(m==b){
         t++;			
		}
		a/=10;
	}
	while(c>10){
		j=c%10;
		if(j==d){
         q++;			
		}
		c/=10;
	}
	while(t--){
		n=n+b*(pow(10,t));
	}
	while(q--){
		k=k+d*(pow(10,q));
	}
	}
	
	printf("%d",n+k);
	return 0;
}
