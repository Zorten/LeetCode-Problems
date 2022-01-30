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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //will be used to hold sums and carrys
        int carry = 0;
        int num1 = 0;
        int num2 = 0;
        int sum = 0;
        
        //list that will hold the result and pointer to first node in such list
        ListNode* sumList = new ListNode(0);
        ListNode* head = sumList;
        
        //iterate through lists and add respecive sums
        while (l1 != NULL && l2 != NULL){
            //get values and add them
            num1 = l1->val;
            num2 = l2->val;
            sum = num1 + num2 + carry;
            
            //check if a carry is needed
            if (sum >= 10){
                carry = 1;
            }
            else{
                carry = 0;
            }
            
            //calculate actual value and store it in next node
            sum = sum % 10;
            sumList->next = new ListNode(sum);
            sumList = sumList->next;
            
            //move on to next node
            l1 = l1->next;
            l2 = l2->next;
        }
        
        //case where l2 is empty buy l1 is not
        if(l2 == NULL && l1 != NULL){
            while(l1 != NULL){
                sum = l1->val + carry;
                
                 //check if a carry is needed
                if (sum >= 10){
                    carry = 1;
                }
                else{
                    carry = 0;
                }
                
                //calculate actual value and store it in next node
                sum = sum % 10;
                sumList->next = new ListNode(sum);
                sumList = sumList->next;
            
                //move on to next node
                l1 = l1->next;
                
            }
        }
        
        //case where l1 is empty buy l2 is not
        if(l1 == NULL && l2 != NULL){
            while(l2 != NULL){
                sum = l2->val + carry;
                
                 //check if a carry is needed
                if (sum >= 10){
                    carry = 1;
                }
                else{
                    carry = 0;
                }
                
                //calculate actual value and store it in next node
                sum = sum % 10;
                sumList->next = new ListNode(sum);
                sumList = sumList->next;
            
                //move on to next node
                l2 = l2->next;
                
            }
        }
        
        if (carry == 1){
            sumList->next = new ListNode(1);
        }
        
        
        return head->next; 
    }
};
