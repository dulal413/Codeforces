#define ulli unsigned long long int
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        for(int i = 0 ; i < n ; i++) tasks[i].push_back(i);
        sort(tasks.begin() , tasks.end());
        priority_queue 
        <
            pair<ulli , int> , 
            vector<pair<ulli , int>> ,
            greater<pair<ulli , int>>
        > pq;

        ulli ind = 0 , pos = 0 , end = 0;
        vector<int> ans(n , -1);
        
        ulli st = tasks[ind][0];
        while(ind < n && tasks[ind][0] == st){
            pq.push({tasks[ind][1] , tasks[ind][2]});
            ind++;
        }
        end = st;

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();

            int du = it.first;
            int id = it.second;

            end += du;
            
            ans[pos] = id;
            pos++;

            while(ind < n && tasks[ind][0] <= end){
                pq.push({tasks[ind][1] , tasks[ind][2]});
                ind++;
            }

            if(pq.empty() && ind < n){
                int st = tasks[ind][0];
                while(ind < n && tasks[ind][0] == st){
                    pq.push({tasks[ind][1] , tasks[ind][2]});
                    ind++;
                }

                end = st;
            }

        }

        return ans;

    }
};
