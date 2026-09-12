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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector<int>ans;
    for(int i=0;i<lists.size();i++){
        ListNode* temp = lists[i];
        while(temp!=NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
    }
    if(ans.empty()) {
        return nullptr;
    }
    sort(ans.begin(),ans.end());
    ListNode* newHead =  new ListNode(ans[0]);
    ListNode*  traverse = newHead;
    for(int i = 1;i<ans.size();i++) {
        traverse->next = new ListNode(ans[i]);
        traverse =  traverse->next;
    }
    return newHead;
    }
};