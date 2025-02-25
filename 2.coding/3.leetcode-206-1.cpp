/*************************************************************************
	> File Name: 3.leetcode-206-1.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 24 Feb 2025 07:03:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode new_head, *p = head, *q;
        new_head.next = NULL;
        while(p){
            q = p->next;
            p->next = new_head.next;
            new_head.next = p;
            p = q;
        }
        return new_head.next
    }
};
