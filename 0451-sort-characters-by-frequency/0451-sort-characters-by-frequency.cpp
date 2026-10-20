class Solution {
public:
    string frequencySort(string s) {
    map<char,int>mpp;
    for(char ch : s) {
        mpp[ch]++;
    }
    priority_queue<pair<int, char>> maxHeap;
        for (auto& pair : mpp) {
            maxHeap.push({pair.second, pair.first});
        }
        string result = "";
        while (!maxHeap.empty()) {
            int freq = maxHeap.top().first;
            char c = maxHeap.top().second;
            maxHeap.pop();
            
            result.append(freq, c);
        }
        return result;    
    }
};