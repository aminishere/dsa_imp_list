// same like boolean version, just an arr extra , which will be filled when indegree[i]==0 OR independent of any courses

class Solution {
public:
    vector<int> topo(unordered_map<int, vector<int>> mp, vector<int>& indegree,
                     int n) {
        int cnt = 0;
        vector<int> res;
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
                cnt++;
                res.push_back(i);
            }
        }
        while (!q.empty()) {
            int top = q.front();
            q.pop();
            for (auto it : mp[top]) {
                indegree[it]--;
                if (indegree[it] == 0) {
                    q.push(it);
                    cnt++;
                    res.push_back(it);
                }
            }
        }
        if (cnt == n)return res;
        
        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> mp;
        vector<int> indegree(numCourses, 0);
        for (auto it : prerequisites) {
            int b = it[0], a = it[1];
            mp[a].push_back(b);
            indegree[b]++;
        }
        return topo(mp, indegree, numCourses);
    }
};
