class Solution {
public:
    int minimumPushes(string word) {

        unordered_map<char, int> mp;

        // Count frequency of each character
        for (char ch : word) {
            mp[ch]++;
        }

        // Max heap to store frequencies
        priority_queue<int> pq;

        for (auto &it : mp) {
            pq.push(it.second);
        }

        int ans = 0;
        int pos = 0;

        while (!pq.empty()) {
            int freq = pq.top();
            pq.pop();

            ans += freq * (pos / 8 + 1);
            pos++;
        }

        return ans;
    }
};