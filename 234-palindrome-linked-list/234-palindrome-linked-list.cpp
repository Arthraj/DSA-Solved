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
    
    bool checkPalindrome(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;j--;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return true;
        
        string s;
        while(head){
            s+= to_string(head->val);
            head=head->next;
        }
        
        if(checkPalindrome(s))return true;
        return false;
    }
};