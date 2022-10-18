class Solution {
    set<vector<int>> ans;
    void recFunc(
        vector<int>& candidates , int n , int target , vector<int> a
    ){
        if(target == 0){
            sort(a.begin() , a.end());
            ans.insert(a);
            return;
        }
        if(n == 0 || target < 0) return;
        recFunc(candidates , n-1 , target , a);
        a.push_back(candidates[n-1]);
        recFunc(candidates , n , target - candidates[n-1] , a);
    }

public:
    vector<vector<int>> combinationSum(
        vector<int>& candidates, int target
    ) {
        recFunc(candidates , candidates.size() , target , {});
        vector<vector<int>> t;
        for(auto it : ans) t.push_back(it);
        return t;
    }
};
