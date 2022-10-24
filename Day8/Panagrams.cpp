class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> mp(26 , 0);
        int distinctChar = 0;
        for(auto it : sentence){
            if(!mp[it - 'a']) distinctChar++;
            mp[it-'a'] = 1;
        }
        return distinctChar == 26;
    }
};
