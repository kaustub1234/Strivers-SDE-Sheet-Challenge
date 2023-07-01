class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
    // Write your code here.
    unordered_map<int, int>unmap;

    for (auto x : arr) {
        unmap[x]++;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    for (auto x : unmap) {
      pq.push({x.second, x.first});

      if (pq.size() > k) {
          pq.pop();
      }
    }

    vector<int> ans;

    while (!pq.empty()) {
        pair<int, int> temp = pq.top();
        pq.pop();
        
        ans.push_back(temp.second);
    }

    return ans;        
    }
};