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
    ListNode* rotateRight(ListNode* head, int k) {
            ListNode* temp=head;
            ListNode* head2=head;
            int n=0;
            
            ListNode* tail=NULL;
            while(temp!=NULL){
               tail=temp;
               temp=temp->next;
               n++;
            }
            if(n==0 || n==1 || k==0)return head;
            tail->next=head;
            k=k%n;
            n=n-k;
            temp=head;
           while(n>1){
               temp=temp->next;
               n--;
            }
            head2=temp->next;
            temp->next=NULL;
       return head2;

    }
};