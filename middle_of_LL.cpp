public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
     Node* temp1 = head->next;
     Node* temp2=head;

     while (temp1 != NULL) {
       temp1 = temp1->next;
       if (temp1!=NULL){
           temp1=temp1->next;
       }
       temp2 = temp2->next;
     }
     return temp2;
}
