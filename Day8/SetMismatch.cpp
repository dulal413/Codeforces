class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int , int> mp;
        int nm = -1, rp = -1;
        for(int i = 0 ; i < nums.size() ; i++) mp[nums[i]]++;
        for(int i = 1 ; i <= nums.size() ; i++){
            if(mp[i] == 2) rp = i;
            else if(mp[i] == 0) nm = i;
        }

        return {rp , nm};
    }
};
