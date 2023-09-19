class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
       if(head==NULL){
            return NULL;
        }
        Node* slow=head;
        Node* fast=head;
        Node* temp=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                
                while(temp!=slow){
                    temp=temp->next;
                    slow=slow->next;
                }
                return temp->data; //or slow->data can be return any one of your choice bith can be return at any case. 
            }
            
            
        }
        return -1;
    }
};
