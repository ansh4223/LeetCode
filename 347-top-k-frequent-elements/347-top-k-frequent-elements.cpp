class Solution {
    struct ListNode{
        int num;
        int freq;
        ListNode(int x,int y){
            num=x;
            freq=y;
        }
    };
    struct comp{
        bool operator()(ListNode const& x, ListNode const& y){
            return x.freq<y.freq;
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(int i:nums){
            m[i]+=1;
        }
        priority_queue<ListNode, vector<ListNode>,comp>heap;
        for(auto it:m){
            heap.push(ListNode(it.first,it.second));
        }
        vector<int>ans;
        while(k--){
            ListNode temp = heap.top();
            heap.pop();
            ans.push_back(temp.num);
        }
        return ans;
    }
};