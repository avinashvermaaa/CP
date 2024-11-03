class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        Node* curr = *head;
        
        int count = 0;
        while(curr != nullptr){
            count++;
            
            curr = curr->next;
        }
        // cout<<count;
        return count % 2 ? false : true;
    }
};
