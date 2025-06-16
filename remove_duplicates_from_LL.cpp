Node *removeDuplicates(Node *head)

{   if (head==NULL || head->next==NULL){
    return head;
}
    unordered_map <int,bool> visited;
    visited[head->data]=true;
    Node* prev=head;
    Node* temp = head->next;

    while(temp!=NULL){
        int index=temp->data;

        if(visited[index]){
            prev->next=temp->next;
            temp=temp->next;
            }
        else{
            visited[index]=true;
            temp=temp->next;
            prev=prev->next;
        }
    }

    return head;

    
}
