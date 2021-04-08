
#include"data.h"
/*
输入: head = [4,5,1,9], val = 5
输出: [4,1,9]
解释: 给定你链表中值为?5?的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
*/


class DeleteNode {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if(head->val==val){
            return head->next;
        }
        ListNode* tmp=head;
        while (tmp)
        {
            /* code */
            if(tmp->next){
                 if(tmp->next->val==val){ 
                    tmp->next=tmp->next->next;
                    break;
                    
                }
            }    
            tmp=tmp->next;

        }
        return head;

    }
};