/*************************************************************************
	> File Name: 2.HZOJ-186.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 24 Dec 2024 08:54:04 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int f(int i, vector<int> &arr, int n) {
    if (i >= n) return 0;
    return f(i + arr[i], arr, n) + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0, a; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }
    cout << f(0, arr, n) << endl;

    return 0;
}
