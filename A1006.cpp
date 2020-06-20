#include<iostream>
using namespace std;
 
int main(){
	string id,in,out;
    string inid,outid;
    string min="24:59:59";
    string mout="00:00:00";
    int n;
    cin>>n;
    while(n--){
  	    cin>>id>>in>>out;
    	if(in<min){
        min=in;
        inid=id;
    }
        if(out>mout){
        mout=out;
        outid=id;
    }
  }
  cout<<inid<<" "<<outid<<endl;
  return 0;
}

