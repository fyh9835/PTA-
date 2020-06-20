#include<stdio.h>
int main(){
	int N=0,i,temp1=0,temp2=0;
	scanf("%d",&N);
	char num[3]={'B','C','J'};
	char jia[N];
	char yi [N];
	int jianum[3]={0};//记录甲赢的手势；
	int yinum [3]={0} ;//记录乙赢的手势； 
	int jiawin[3]={0};//记录甲胜平负的次数； 
	int yiwin [3]={0};//记录乙胜平负的次数；
	for(i=0;i<N;i++){
		getchar();
		scanf("%c %c",&jia[i],&yi[i]);
		if(jia[i]==yi[i]){
			jiawin[1]++;
			yiwin[1]++;
		}else if(jia[i]=='C'&&yi[i]=='J'){//甲赢 
			jiawin[0]++;
			yiwin[2]++;
			jianum[1]++;
		}else if(jia[i]=='C'&&yi[i]=='B'){//甲输 
			jiawin[2]++;
			yiwin[0]++;
			yinum[0]++;
		}else if(jia[i]=='J'&&yi[i]=='C'){
			jiawin[2]++;
			yiwin[0]++;
			yinum[1]++;	
		}else if(jia[i]=='J'&&yi[i]=='B'){
			jiawin[0]++;
			yiwin[2]++;
			jianum[2]++;	
		}else if(jia[i]=='B'&&yi[i]=='C'){
			jiawin[0]++;
			yiwin[2]++;
			jianum[0]++;	
		}else if(jia[i]=='B'&&yi[i]=='J'){
			jiawin[2]++;
			yiwin[0]++;
			yinum[2]++;	
		}
	} 
		printf("%d %d %d\n",jiawin[0],jiawin[1],jiawin[2]);
		printf("%d %d %d\n",yiwin[0],yiwin[1],yiwin[2]);
		printf("%d %d %d\n",jianum[0],jianum[1],jianum[2]);
		printf("%d %d %d\n",yinum[0],yinum[1],yinum[2]);
		for(i=0;i<3;i++){
			if(jianum[i] >jianum[temp1]) temp1=i;
			if(yinum[i] > yinum[temp2]) temp2=i;
		}
		printf("%c %c",num[temp1],num[temp2]);
		
	return 0;
}
