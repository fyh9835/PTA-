#include <iostream>
#include<string>
#include<vector>
#include<sstream>
#include <iomanip> 
using namespace std;
 
int main() {
	int n, in;
	int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
	double A4 = 0; int A4T = 0;
	cin >> n;
	int flag = 1;
	int A2T = 0;
	while (n--) {
		cin >> in;
		if (in % 5 == 0 && in % 2 == 0)	//能被 5 整除的数字中所有偶数的和；
			A1 += in;
		else if (in % 5 == 1) {			//被5整除后余1的数字交错求和，n1-n2+n3-n4...
			A2T++;
			in = in * flag;
			A2 += in;
			flag *= -1;
		}
		else if (in % 5 == 2) {			//能被5整除余2的树的个数
			A3++;
		}
		else if (in % 5 == 3) {			//被5整除后余3的树的平均值，保留一位小数
			A4 += in;
			A4T++;
		}
		else if (in % 5 == 4) {			//被5整除余4中数字最大的数字
			if (in > A5)
				A5 = in;
		}
	}
	if (A1 != 0)
		cout << A1 << " ";
	else
		cout << "N ";
	if (A2T == 0)
		cout << "N ";
	else
		cout << A2 << " ";
	if (A3 == 0)
		cout << "N ";
	else
		cout << A3 << " ";
	if (A4 == 0)
		cout << "N ";
	else
		printf("%.1f ", A4 / A4T);
	if (A5 == 0)
		cout << "N" << endl;
	else
		cout << A5 << endl;
	return 0;
}

