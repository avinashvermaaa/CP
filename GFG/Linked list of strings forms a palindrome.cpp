// https://www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1

class Solution {
  public:
    bool compute(Node* head) {
        
        string s="";
        while(head)
        {
            s+=head->data;
            head=head->next;
        }
       string ok = s;  
    reverse(ok.begin(), ok.end());  
    if (s == ok) {
        return true;
    }
    return false;
    }
};
