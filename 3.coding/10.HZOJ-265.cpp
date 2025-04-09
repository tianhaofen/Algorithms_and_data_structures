/*************************************************************************
	> File Name: 10.HZOJ-265.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Thu 27 Mar 2025 09:13:16 AM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

#define MAX_N 10000
char str[MAX_N + 5];
int match[MAX_N + 5] = {0};
stack<int> s;

int main() {
    cin >> (str + 1);
    for (int i = 1; str[i]; i++) {
        switch (str[i]) {
            case '(': 
            case '[': 
            case '{': s.push(i); break;
            case ')': {
                if (!s.empty() && str[s.top()] == '('){
                    match[s.top()] = i;
                    match[i] = s.top();
                    s.pop();
                }else{
                    s.push(i);
                }
            } break;
            case ']': {
                if (!s.empty() && str[s.top()] == '['){
                    match[s.top()] = i;
                    match[i] = s.top();
                    s.pop();
                }else{
                    s.push(i);
                }
            } break;
            case '}': {
                if (!s.empty() && str[s.top()] == '{'){
                    match[s.top()] = i;
                    match[i] = s.top();
                    s.pop();
                }else{
                    s.push(i);
                }
            } break;        
        }
    }
    int temp_ans = 0, ans = 0, i = 1;
    while (str[i]) {
        if (match[i]) {
            temp_ans += (match[i] - i + 1);
            i = match[i] + 1;
        } else {
            i += 1;
            temp_ans = 0;
        }
        if (temp_ans > ans) ans = temp_ans;
    }
    cout << ans << endl;
    
    return 0;
}
