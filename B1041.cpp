#include <iostream>
using namespace std;
int main() {
    string stu[1005][2], s1, s2;//2DÊý×é
    int n, m, t;//t´ú±íÊÔ»úºÅ
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s1 >> t >> s2;
        stu[t][0] = s1;//Ò»Î¬´æ¿¼ºÅ
        stu[t][1] = s2;//Ò»Î¬´æ¿¼ÊÔºÅ
    } 
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> t;
        cout << stu[t][0] << " " << stu[t][1] << endl;
    } 
    return 0;
}

