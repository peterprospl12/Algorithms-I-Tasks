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

struct ListNode {
    int val;
    ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start = l1;
        while(l2 != nullptr) {
            if(l1->val + l2->val >= 10) {
                if(l1->next == nullptr) {
                    l1->next = new ListNode();
                }
                l1->val = (l1->val + l2->val) % 10;
                l1->next->val +=1;
            }
            else {
                l1->val += l2->val;
            }

            if(l1->next == nullptr && l2->next != nullptr) {
                l1->next = new ListNode();
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != nullptr && l1->val >= 10) {
            l1->val = l1->val % 10;

            if(l1->next == nullptr) {
                l1->next = new ListNode(1);
            }
            else {
                l1->next->val += 1;
            }
            l1 = l1->next;
        }
        return start;
    }
};


int main() {
    std::vector<int> s1 = {2,4,9};
    std::vector<int> s2 = {5,6,4,9};
    ListNode* s1start;
    ListNode* s2start;
    ListNode* s11 = new ListNode(0);
    ListNode* s22 = new ListNode(0);

    s1start = s11;
    s2start = s22;

    //s22->next = new ListNode(6, new ListNode(4, new ListNode(9)));
    //s11->next = new ListNode(4, new ListNode(9));

    Solution p;
    p.addTwoNumbers(s1start, s2start);



}