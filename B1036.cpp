#include<iostream>
using namespace std;
int main(){
	int a,b,d,e,f,g,h;
	char c;
	cin>>a>>c;
	d=a;e=a;f=a;g=a;
	if(a%2==1){
		h=a/2+1;
	}else{
		h=a/2;	
	}
	for(int i=0;i<h;i++){
		if(i==0||i==h-1){
			b=a;
			while(b!=0){
				cout<<c;
				b--;
			}
			if(i==0) cout<<endl;
		}
		if(i>0&&i<h-1){
			d=a;
			while(d){
				if(d==a||d==1){
					cout<<c;
				}else{
					cout<<" ";
				}
				if(d==1) cout<<endl;
				d--;
			}
		}
	}
	
	
	return 0;	
}
