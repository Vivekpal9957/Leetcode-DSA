
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a == NULL) return b;
        if(b == NULL) return a;

        ListNode* result;
        if(a->val < b->val){
            result = a;
            result->next = mergeTwoLists(b, a->next);

        }else{
            result = b;
            result->next = mergeTwoLists(a, b->next);

        }
          return result;

    }
};