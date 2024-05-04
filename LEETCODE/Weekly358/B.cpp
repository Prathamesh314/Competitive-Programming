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
    ListNode* doubleIt(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        int carry = 0;
        // int ans = 0;
        vector<int> ans;
        ListNode* newhead = NULL;
        while(!st.empty()){
            int prod = st.top();
            st.pop();
            prod = prod*2;
            int put = prod%10+carry;
            if(newhead == NULL){
                newhead = new ListNode(put);
            }else{
                ListNode* temp = new ListNode(put);
                temp->next = newhead;
                newhead = temp;
            }
            // ans.push_back(put);
            carry = prod/10;
        }
        if(carry){
            // ans.push_back(1);
            ListNode* temp = new ListNode(1);
            temp->next = newhead;
            newhead = temp;
        }
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i];
        // }
        return newhead;
    }
};
