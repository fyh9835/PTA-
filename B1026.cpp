#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=b-a;
	if(c%100>=50){
		c=c/100+1; 
	}else{
		c/=100;
	}
	printf("%02d:%02d:%02d\n",c/3600,c%3600/60,c%60);
	return 0;
} 
