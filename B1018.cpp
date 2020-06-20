#include <stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	char num[3]={'B','C','J'};
	char jia[n]; // 存放甲手势
	char yi[n]; // 存放乙手势
	int jia_num[3]={0}; // 甲 胜平负 的计数
	int jia_win[3]={0}; // 甲 三次手势(J、B、C)赢的计数，用数字代替字母
	int yi_win[3]={0}; // 乙 三次手势 赢的计数
	for(int i=0;i<n;i++){
	  getchar(); // 读入回车
		scanf("%c %c",&jia[i],&yi[i]);
		if(jia[i] == yi[i]) jia_num[1]++; // 甲 平
		else if(jia[i] == 'J' && yi[i] == 'B'){
			// 甲  J 赢
			jia_num[0]++;
			jia_win[2]++;
		}
		else if(jia[i] == 'B' && yi[i] == 'C'){
			// 甲  B 赢
			jia_num[0]++;
			jia_win[0]++;
		}
		else if(jia[i] == 'C' && yi[i] == 'J'){
			// 甲 C 赢
			jia_num[0]++;
			jia_win[1]++;
		}
		else if(yi[i] == 'J' && jia[i] == 'B'){
			// 甲负 = 乙J赢
			jia_num[2]++;
			yi_win[2]++;
		}
		else if(yi[i] == 'B' && jia[i] == 'C'){
			// 甲负 = 乙B赢
			jia_num[2]++;
			yi_win[0]++;
		}
		else if(yi[i] == 'C' && jia[i] == 'J'){
			// 甲负 = 乙C赢
			jia_num[2]++;
			yi_win[1]++;
		}
	}
	printf("%d %d %d\n",jia_num[0],jia_num[1],jia_num[2]);
	printf("%d %d %d\n",jia_num[2],jia_num[1],jia_num[0]);
//	printf("%d %d %d\n",jia_win[0],jia_win[1],jia_win[2]);
//	printf("%d %d %d\n",yi_win[0],yi_win[1],yi_win[2]);
	int jia_max=0,yi_max=0;
	for(int i=0;i<3;i++){
		if(jia_win[i] > jia_win[jia_max]) jia_max=i;
		if(yi_win[i] > yi_win[yi_max]) yi_max=i;
	}
	printf("%c %c",num[jia_max],num[yi_max]);
}


