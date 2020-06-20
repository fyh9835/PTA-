#include<iostream>
using namespace std;
int main(){
	string stu1 = "23:59:59";
	string stu2 = "00:00:00";
	string id,in,out,inid,outid;
	int a;
	cin>>a;
	while(a--)
	{
		cin>>id>>in>>out;
		if(in<stu1){
			stu1=in;
			inid=id;
		}
		if(out>stu2){
			stu2=out;
			outid=id;
		}
	}
	cout<<inid<<" "<<outid;
	
	
	return 0;
} 
