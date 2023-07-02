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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        while (l1 != nullptr && l2 != nullptr)
        {
            int val = l1->val + l2->val + carry;
            if (val < 10)
            {
                carry = 0;
                ListNode *hold = new ListNode(val);
                temp->next = hold;
                temp = hold;
                l1 = l1->next;
                l2 = l2->next;
                continue;
            }
            val %= 10;
            carry = 1;
            ListNode *hold = new ListNode(val);
            temp->next = hold;
            temp = hold;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr)
        {
            int val = l1->val + carry;
            if (val < 10)
            {
                carry = 0;
                ListNode *hold = new ListNode(val);
                temp->next = hold;
                temp = hold;
                l1 = l1->next;
                continue;
            }
            val %= 10;
            carry = 1;
            ListNode *hold = new ListNode(val);
            temp->next = hold;
            temp = hold;
            l1 = l1->next;
        }
        while (l2 != nullptr)
        {
            int val = l2->val + carry;
            if (val < 10)
            {
                carry = 0;
                ListNode *hold = new ListNode(val);
                temp->next = hold;
                temp = hold;
                l2 = l2->next;
                continue;
            }
            val %= 10;
            carry = 1;
            ListNode *hold = new ListNode(val);
            temp->next = hold;
            temp = hold;
            l2 = l2->next;
        }
        if (carry)
        {
            ListNode *hold = new ListNode(1);
            temp->next = hold;
            temp = hold;
        }
        ListNode *holdHeadptr = head->next;
        delete head;
        return holdHeadptr;
    }
};