#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int a1,a2,b1=1,a3,num;
	cin>>num;
	a1=num/100;
	while(a1){
		cout<<"B";
		a1--;
	}
	a2=num%100/10;
	while(a2){
		cout<<"S";
		a2--;
	}
	a3=num%10;
	while(b1<=a3){
		cout<<b1;
		b1++;
	}
	return 0;
} 
