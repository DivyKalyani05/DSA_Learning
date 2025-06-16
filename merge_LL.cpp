void solve(Node<int>* first, Node<int>* second){
    if (first->next==NULL){
        first->next=second;
        return;
    }


    Node<int>* prev = first;
    Node<int>* curr=prev->next;
    Node<int>* temp=second;
    Node<int>* temp2=second->next;

    while(temp!=NULL && curr!=NULL){
        if (temp->data >= prev->data && temp->data<=curr->data){
            prev->next=temp;
            temp->next=curr;
            prev=prev->next;
            temp=temp2;
            if (temp){temp2=temp->next;}
            }

        else{
            prev=prev->next;
            curr=curr->next;
        }

       
    }
      if (temp != NULL) {
        prev->next = temp;
    }
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if (first==NULL){
        return second;
    }

    if (second==NULL){
        return first;
    }


    if (first->data<second->data){
        solve(first,second);
        return first;
    }
    else{
         solve(second,first);
        return second;
    }

        


    }
