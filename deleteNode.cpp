
#include"data.h"
/*
����: head = [4,5,1,9], val = 5
���: [4,1,9]
����: ������������ֵΪ?5?�ĵڶ����ڵ㣬��ô�ڵ�������ĺ���֮�󣬸�����Ӧ��Ϊ 4 -> 1 -> 9.
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