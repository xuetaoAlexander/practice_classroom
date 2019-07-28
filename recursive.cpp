/*************************************************************************
	> File Name: recursive.cpp
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月27日 星期六 19时10分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

int recursive(int n) {
    if (n == 1) {
        return 1;
    } else {
        return recursive(n - 1) * n;
    }
}
int main() {
    int n;
    cin >> n;
    cout << recursive(n) << endl;

    return 0;
}
