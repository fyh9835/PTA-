#include<iostream>
using namespace std;
bool judge (int s[] , int num){
	for(int i=0;i<num/2;i++){
		if(s[i]!=s[num-1-i]){
			return false;
		}
	}	
	return true;
}
int main(){
	int  a,s,count=0;
	int b[100];
	cin>>a>>s;//更改进制  10变成s进制 
	do{
		b[count++]=a%s;
		a/=s;
	}while(a);
	bool flag = judge(b,count);
	if(flag==true)  cout<<"Yes"<<endl;
	else   cout<<"No"<<endl;
	while (count){
		if(count!=1)  cout<<b[--count]<<" ";
        else cout<<b[--count];
	}

	return 0;
}
