#include<stdio.h>
int main(){
	int a,i,c=0;
	scanf("%d",&a);
	int begin[55]={0};
	int end[55]={0};
	int next[55]={0};
	char F[6]={'S','H','C','D','J'};
	for(i=1;i<55;i++){
		scanf("%d",&next[i]);
	}
	for(i=1;i<55;i++){
		begin[i]=i;
	}
	for(c=0;c<a;c++){
		for(i=1;i<=54;i++){
			end[next[i]]=begin[i];
		}
		for(i=1;i<=54;i++){
			begin[i]=end[i];
		}
	} 
	for(c=1;c<=54;c++){
		printf("%d ",begin[c]);
	}
	printf("\n");
	for(c=1;c<=54;c++){
		if(c!=1) printf(" ");
		begin[c]--;
		printf("%c%d",F[begin[c]/13],begin[c]%13+1);
	}
	return 0;
}

