#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
//class Solution
//{
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//    {
//        return nullptr;
//    }
//};

ListNode* numberList(std::vector<int>& digits)
{
    ListNode* next;

    for (std::vector<int>::reverse_iterator i = digits.rbegin();
            i != digits.rend(); ++i)
    {
        if (i == digits.rbegin())
        {
            next = new ListNode { *i };
        }
        else
        {
            next = new ListNode { *i, next };
        }
    }

    return next;
}

void printList(ListNode* head)
{
    while (head != nullptr)
    {
        std::cout << head->val << ", ";
        head = head->next;
    }

    std::cout << '\n';
}

int main()
{
    std::vector<int> case1 { 2, 4, 3 };
    ListNode* head = numberList(case1);

    printList(head);

    return 0;
}
