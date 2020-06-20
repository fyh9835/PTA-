#include<cstdio>
#include <iomanip>
using namespace std; 
int main(){
	char c[4]={'W','T','L'};
	double a,b,h,max=1;
	for(int i=0;i<3;i++){
		scanf("%lf%lf%lf",&a,&b,&h);
		if(a>b&&a>h){
			c[i]='W';
			max*=a;
			printf("%c ",c[0]);
		}else if(b>a&&b>h){
			printf("%c ",c[1]);
			max*=b;
		}else if(h>a&&h>b){
			printf("%c ",c[2]);
			max*=h;
		}
	}
		double gg=(max*0.65-1)*2;
		printf("%.2lf",gg);	
	return 0;
}
