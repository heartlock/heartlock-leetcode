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

    ListNode* sortList(ListNode* head) {

       if (head == NULL || head->next == NULL){

           return head;

       } 

       ListNode* fast = head;

       ListNode* slow = head;

       while(fast->next && fast->next->next){

           fast = fast->next->next;

           slow = slow->next;

       }

       fast = slow->next;

       slow->next = NULL;

       

       ListNode* p1 = sortList(head);

       ListNode* p2 = sortList(fast);

       

       return merge(p1, p2);

    }

    

    ListNode* merge(ListNode* l1, ListNode* l2){

        /*if (!l1){

            return l2;

        }else if (!l2){

            return l1;

        }else if (!l1 && !l2){

            return NULL;

        }*/

        

        ListNode helper(0);

        ListNode* p = &helper;

        

        while(l1 && l2){

            if (l1->val < l2->val){

                p->next = l1;

                l1 = l1->next;

            }else {

                p->next = l2;

                l2 = l2->next;

            }

            p = p->next;

        }

        if (!l1){

            p->next = l2;

        }else {

            p->next = l1;

        }

        return helper.next;

    }

};
