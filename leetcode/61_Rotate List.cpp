//题意：给一个链表和一个数字k，从后往前数，将k个元素挪到最前面
//思路：最一般的思路，先遍历链表，得到长度len，然后再把后k个元素挪到前面，写代码时写错的地方，没注意空数组和k=0的情况，没注意k大于链表长度的情况。

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k == 0)
            return head;
        
        ListNode* ptr = head;
        int len = 0;
        while(ptr){
            len++;
            ptr = ptr->next;
        }
        
        k = k % len;
        
        if(len == 1 || k == 0)
            return head;
        
        
        ptr = head;
        int n = len-k-1;
        while(n--){
            ptr = ptr->next;
        }
        
        ListNode* ptr2 = ptr->next;
        ptr->next = NULL;
        
        ptr = ptr2;
        while(ptr->next){
            ptr = ptr->next;
        }
        
        ptr->next = head;
        head = ptr2;
        
        return head;
    }
};
