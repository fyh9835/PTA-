#include<stdio.h>
main()
{
	int a=0,b=0,g=0;
    scanf("%d%d",&a,&b);
    if(b==0||a==0){
    	printf("0 0");
	}else if(a&&b){
		printf("%d %d",a*b,b-1);
	}
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b>1000){
			return 0;
		}else if(b<0){
			return 0;
		}else if(a&&b){
			printf(" %d %d",a*b,b-1);
		}
	}
	return 0;
	
 } 

