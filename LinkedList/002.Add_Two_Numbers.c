#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *temp1 = l1;
    struct ListNode *temp2 = l2;

    struct ListNode *head = NULL, *curr = NULL;

    int carry = 0;

    while(temp1 != NULL || temp2 != NULL || carry){
        int n1 = 0, n2 = 0;

        if(temp1 != NULL){
            n1 = temp1->val;
            temp1 = temp1->next;
        }

        if(temp2 != NULL){
            n2 = temp2->val;
            temp2 = temp2->next;
        }

        int sum = n1 + n2 + carry;
        carry = sum / 10;

        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;

        if(head == NULL){
            head = node;
            curr = node;
        } else {
            curr->next = node;
            curr = curr->next;
        }
    }

    return head;
}
