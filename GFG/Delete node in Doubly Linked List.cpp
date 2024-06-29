// https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1



class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
  
        int currIndex = 1;
        Node* prevNode = NULL;
        Node* curr = head;
    
        if(x == 1){
            Node* newHead = head->next;
            newHead->prev = NULL;
            return newHead;
        }
        
        while(currIndex++ != x){
            prevNode = curr;
            curr = curr->next;
        }
        
        prevNode->next = curr->next;
        
        if(curr->next)
        curr->next->prev = prevNode;
        
        return head;
        
    }
};
