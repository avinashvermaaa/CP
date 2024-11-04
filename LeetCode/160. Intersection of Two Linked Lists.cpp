class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        unordered_map<ListNode*, int> mp;
	for(auto it = headA; it!= NULL ; it = it->next)	
	{
		mp[it] = it->val;
	}
	
	for(auto it = headB; it != NULL ; it =it->next)
	{
		if(mp.find(it) != mp.end()) return it;
	}
	
    return nullptr;
        
    }
};


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
