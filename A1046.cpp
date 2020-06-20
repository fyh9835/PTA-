#include<stdio.h>
int a[100011]={0};
int main(){
	int N,i,t,m,n,a4;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d",&a4);
		if(i==1) a[i+1]=a4;
		else a[i+1]=a[i]+a4;
	}
		scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d",&m,&n);
		if(m>n){
		int temp;
		temp=m;
		m=n;
		n=temp;
		}
			int q1=0,q2=0;
			q1=a[n]-a[m];
			q2=a[N+1]-q1;
			if(q1<=q2){
			printf("%d\n",q1);	
			}else{
			printf("%d\n",q2);		
			}
				
	} 	
	return 0;
}
 
