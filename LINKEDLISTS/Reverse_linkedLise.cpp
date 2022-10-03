// This Code Is contributed by Kunal Chauhan
// github:- https://github.com/Kunal-Chauhan7

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *current = head;            // makking a node which will point to the current node
        ListNode *prev = NULL, *next = NULL; // making a pointer which will point towards the prev Node and one node which will point towards next node

        while (current != NULL)
        {                         // Untill current node reaches the End of the Linked List The loop will run
            next = current->next; // we are pointing our next pointer towards the next node from current
            current->next = prev; // the current node will point towards the previous node now
            prev = current;       // now the previous node will become the next node
            current = next;       // now the current will point towards the next node
        }
        head = prev; // the head will now point to the prev node so that our head will become tail
        return head;
    }
};
