#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
   char dic[14] = {"0123456789ABC"};
   int i =0;
   int num1,num2,num3;
     cin>>num1>>num2>>num3;
     cout<<"#";
     cout<<dic[num1/13]<< dic[num1%13];
     cout<<dic[num2/13]<< dic[num2%13];
     cout<<dic[num3/13]<< dic[num3%13];
   return 0;
   
}
