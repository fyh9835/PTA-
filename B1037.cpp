#include<stdio.h>
int main(){
	int g1,s1,k1,g2,s2,k2,g3,s3,k3;
	scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
	if(g2*17*29+s2*29+k2>g1*17*29+s1*29+k1){
		if(k2>=k1){
		k3=k2-k1;
	}else if(k2<k1){
		k3=k2+29-k1;
		s2--;
	}
	if(s2>=s1){
		s3=s2-s1;
	}else{
		s3=s2+17-s1;
		g2--;
	}
		g3=g2-g1;
	printf("%d.%d.%d",g3,s3,k3);	
	}else if(g2*17*29+s2*29+k2==g1*17*29+s1*29+k1){
		printf("%d.%d.%d",0,0,0);
	}else if(g2*17*29+s2*29+k2<g1*17*29+s1*29+k1){
		if(k1>=k2){
		k3=k1-k2;
	}else if(k1<k2){
		k3=k1+29-k2;
		s1--;
	}
	if(s1>=s2){
		s3=s1-s2;
	}else{
		s3=s1+17-s2;
		g1--;
	}
		g3=g1-g2;
	printf("-%d.%d.%d",g3,s3,k3);
	}

	return 0;
}
