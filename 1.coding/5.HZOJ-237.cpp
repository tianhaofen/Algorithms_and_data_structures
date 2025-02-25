/*************************************************************************
	> File Name: 5.HZOJ-237.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 30 Dec 2024 05:17:05 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int arr[10], vis[10] = {0};

void printf_one_result(int n) {
    for (int i = 0; i < n; i++){
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void f(int i, int n) {
    if (i == n) {
        printf_one_result(n);
        return ;
    }
    for (int k = 1; k <= n; k++){
        if (vis[k]) continue;
        arr[i] = k;
        vis[k] = 1;
        f(i + 1, n);
        vis[k] = 0;
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    f(0, n);

    return 0;
}
