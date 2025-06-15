#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{   if (head==NULL || head->next==NULL){
    return head;
}
    LinkedListNode<int> * prev = NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int>* forward=curr->next;

    while (curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=forward;
        if (forward){
        forward=forward->next;}

    }
        
        

        








    
    return prev;
}
