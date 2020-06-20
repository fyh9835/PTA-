#include<cstdio>
using namespace std;
int main(){
	int a1,a2,b1,b2,c1,c2,a3,b3,c3,num;
	scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);	
		c3=c1+c2;
		b3=b1+b2;
		a3=a1+a2;
		b3=b3+c3/29;
		c3%=29;
		a3=a3+b3/17;
		b3%=17;
	printf("%d.%d.%d",a3,b3,c3);
	return 0;
} 
