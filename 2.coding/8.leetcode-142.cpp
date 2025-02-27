/*************************************************************************
	> File Name: 8.leetcode-142.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Tue 25 Feb 2025 04:18:44 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head, *q = head;
        while(q && q->next) {
            p = p->next;
            q = q->next->next;
            if (p == q) break;
        }
        if (q == NULL || q->next == NULL) return NULL;
        p = head;
        while(p != q) p = p->next, q = q->next;
        return p;
    }
};
