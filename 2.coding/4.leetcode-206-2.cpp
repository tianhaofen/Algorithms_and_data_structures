/*************************************************************************
	> File Name: 4.leetcode-206-2.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 24 Feb 2025 07:58:43 PM CST
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
        if (head == NULL || head->next == NULL) return head;
        ListNode *tail = head->next;
        ListNode *new_head = reverseList(head->next);
        head->next = tail->next;
        tail->next = head;
        return new_head;
    }
};
