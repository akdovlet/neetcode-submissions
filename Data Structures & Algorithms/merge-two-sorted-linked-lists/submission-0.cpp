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

void    printList(ListNode* lst)
{
    while (lst)
    {
        printf("lst->val = %d\n", lst->val);
        lst = lst->next;
    }
}

ListNode    *newListNode(ListNode *lst = NULL)
{
    ListNode    *cpy = new ListNode;

    cpy->val = lst->val;
    cpy->next = NULL;
    return (cpy);
}

class Solution 
{
public:
    ListNode        *mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode    *result = new ListNode;
        ListNode    *curr = result;

        while (list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if (list1)
            curr->next = list1;
        else if (list2)
            curr->next = list2;
        return (result->next);  
    }
};
