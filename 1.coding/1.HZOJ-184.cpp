/*************************************************************************
	> File Name: 1.HZOJ-184.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Dec 2024 08:44:25 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return (f(n -1) + 1) * 2;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}
