#include <stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	char num[3]={'B','C','J'};
	char jia[n]; // ��ż�����
	char yi[n]; // ���������
	int jia_num[3]={0}; // �� ʤƽ�� �ļ���
	int jia_win[3]={0}; // �� ��������(J��B��C)Ӯ�ļ����������ִ�����ĸ
	int yi_win[3]={0}; // �� �������� Ӯ�ļ���
	for(int i=0;i<n;i++){
	  getchar(); // ����س�
		scanf("%c %c",&jia[i],&yi[i]);
		if(jia[i] == yi[i]) jia_num[1]++; // �� ƽ
		else if(jia[i] == 'J' && yi[i] == 'B'){
			// ��  J Ӯ
			jia_num[0]++;
			jia_win[2]++;
		}
		else if(jia[i] == 'B' && yi[i] == 'C'){
			// ��  B Ӯ
			jia_num[0]++;
			jia_win[0]++;
		}
		else if(jia[i] == 'C' && yi[i] == 'J'){
			// �� C Ӯ
			jia_num[0]++;
			jia_win[1]++;
		}
		else if(yi[i] == 'J' && jia[i] == 'B'){
			// �׸� = ��JӮ
			jia_num[2]++;
			yi_win[2]++;
		}
		else if(yi[i] == 'B' && jia[i] == 'C'){
			// �׸� = ��BӮ
			jia_num[2]++;
			yi_win[0]++;
		}
		else if(yi[i] == 'C' && jia[i] == 'J'){
			// �׸� = ��CӮ
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


