#include<iostream>

using namespace std;
int main(){
	char s2;
    string s1,s3,boy,girl,b1,g1;
	int a, b, max=101, min=-5,nb=0,ng=0;
	cin>>a;
	while(a--){
		cin>>s1>>s2>>s3>>b;
		if(s2=='M'){
			if(b<max){
				max=b;
				boy=s1;
				b1=s3;
			}
			nb++;
		}
		if(s2=='F'){
			if(b>min){
				min=b;
				girl=s1;
				g1=s3;
			}
			ng++;
		}
	}	
	if(min==-5) cout<<"Absent"<<endl;
	else cout<<girl<<" "<<g1<<endl;
	if(max==101) cout<<"Absent"<<endl;
	else cout<<boy<<" "<<b1<<endl;
	if(ng&& nb) cout<<min-max<<endl;
	else cout<<"NA"<<endl;
	
	return 0;
}
