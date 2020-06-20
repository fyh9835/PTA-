#include<iostream>
using namespace std;
int main(){
	string stu[111][2],s1,s2;
	int x,a,max=-1,min=100;
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> s1 >> s2 >> a;
		stu[a][0]=s1;
		stu[a][1]=s2;
		if(a>max){
			max=a;
		}
		if(a<min){
			min=a;
		}
	}
	cout<<stu[max][0]<<" "<<stu[max][1]<<endl;
	cout<<stu[min][0]<<" "<<stu[min][1]<<endl;	
	return 0;
} 
