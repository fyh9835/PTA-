#include<iostream>
using namespace std;

int main(){
	int a,b,d;
	cin>>a>>b>>d;
	int c=a+b;
	int e[31];
	int count=0;
	do{
		e[count++]=c%d;
		c/=d;
	}while(c);	
	while(count){
		cout<<e[--count];
	}
	return 0;
}
