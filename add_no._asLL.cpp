void reverse_LL(Node* & head){
    Node* prev= NULL;
    Node* curr=head;
    Node* nexti= head->next;
    
    
    while(curr){
        curr->next=prev;
        prev=curr;
        curr=nexti;
        if(nexti){
            nexti=nexti->next;
        }
    }
    
    head=prev;
}

class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        // remove extra 0s from the start of num1
         while(num1->data==0){
           num1=num1->next; 
        }
        //remove extra 0s from start of num2
        while (num2->data==0){
            num2=num2->next;
        }
        // reverse 1st
       reverse_LL(num1);
         // reverse 2nd 
        reverse_LL(num2);
        //add
       
        Node* temp1=num1;
        Node* temp2=num2;
        int carry=0;
        Node * ans=NULL;
        
        
        
        while(temp1 && temp2){
            int ans1=carry+(temp1->data)+(temp2->data);
            int to_be_added;
            if(ans1>9){
                to_be_added=ans1%10;
                carry=1;
            }
            
            else{
                to_be_added=ans1;
                carry=0;
            }
            
            Node* to_push= new Node (to_be_added);
            
            to_push->next=ans;
            ans=to_push;
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        while(temp1){
            int ans1=(temp1->data)+carry;
            int to_be_added;
            if(ans1>9){
                to_be_added=ans1%10;
                carry=1;
            }
            
            else{
                to_be_added=ans1;
                carry=0;
            }
            
            Node* to_push= new Node (to_be_added);
            
            to_push->next=ans;
            ans=to_push;
            
            temp1=temp1->next;
            
        }
        
        while (temp2){
            int ans1=(temp2->data)+carry;
            int to_be_added;
            if(ans1>9){
                to_be_added=ans1%10;
                carry=1;
            }
            
            else{
                to_be_added=ans1;
                carry=0;
            }
            
            Node* to_push= new Node (to_be_added);
            
            to_push->next=ans;
            ans=to_push;
            
            temp2=temp2->next;
            
            
        }
        
        if (carry==1){
            Node* to_push=new Node(1);
            to_push->next=ans;
            ans=to_push;
        }
        
        return ans;
    }
};
