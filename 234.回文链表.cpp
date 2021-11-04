/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start
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
    ListNode * reverse(ListNode * head)
    {
        ListNode * p = NULL;
        ListNode * q = head;

        while(q != NULL)
        {
            ListNode * r = q->next;
            q->next = p;
            p = q;
            q = r;
        }

        return p;
    }

    ListNode * midNode(ListNode * head)
    {
        ListNode * slow = head;
        ListNode * fast = head;

        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return true;
        }

        ListNode * firstHalf = midNode(head);
        ListNode * secondHalf = reverse(firstHalf->next);

        ListNode * one = head;
        ListNode * theOther = secondHalf;

        bool res = true;

        while(res && theOther != NULL)
        {
            if(one->val != theOther->val)
            {
                res = false;
            }

            one = one->next;
            theOther = theOther->next;
        }

        firstHalf->next = reverse(secondHalf);

        return res;
    }
};
// @lc code=end

