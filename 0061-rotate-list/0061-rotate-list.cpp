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
    ListNode* findnthnode(ListNode* temp, int k){
       int count=1;

       while(temp != NULL){
        if(count==k) return temp;

        temp=temp->next;
        count++;
       }
       return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0){
            return head;
        }

        ListNode* tail=head;
        int len=1;

        while(tail->next != NULL){
           tail=tail->next;
           len++;
        }
        if(k%len==0) return head;
        k=k%len; 
        
        tail->next=head;
        ListNode* newlastNode= findnthnode(head,len-k);
        head=newlastNode->next;
        newlastNode->next=NULL;

        return head;
    }
};