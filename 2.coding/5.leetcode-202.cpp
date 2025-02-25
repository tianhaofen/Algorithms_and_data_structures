/*************************************************************************
	> File Name: 5.leetcode-202.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 25 Feb 2025 02:29:59 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution {
public:
    int getNext(int x){
        int d, y = 0;
        while (x) {
            d = x % 10;
            y += d * d;
            x /= 10;
        }
        return y;
    } 
    bool isHappy(int n) {
        int p = n, q = n;
        while(q != 1) {
            p = getNext(p);
            q = getNext(getNext(q));
            if (p == q && p != 1) return false;
        }
        return true;
    }
};
