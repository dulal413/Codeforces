class Solution {
    string say(string s){
        int i = 0 , n = s.length() , cou = 0;
        char ch;
        string ans = "";
        do{
            cou = 1;
            ch  = s[i];
            i++;
            while(i < n && s[i] == ch) {i++; cou++;}
            ans += (to_string(cou) + ch);
        }while(i < n);

        return ans;
    }
public:
    string countAndSay(int n) {
        vector<string> dp(n+1 );
        dp[1] = "1";
        if(n == 1) return "1";
        for(int i = 2 ; i <= n ; i++)
            dp[i] = say(dp[i-1]);
        return dp[n];
    }
};
