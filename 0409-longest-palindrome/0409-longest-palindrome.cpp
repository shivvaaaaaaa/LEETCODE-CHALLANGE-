class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int>have;
        for(int i = 0; i<s.size(); i++){
        have[s[i]]++;
        }
        
        int res = 0;
        bool odd = false;

        for(auto i : have){
            int f = i.second;
            if(f%2 == 0){
                res += f;
            }
            else{
                res += (f-1);
                odd = true;
            }
        }
        if(odd){
            res += 1;
        }
        return res;
        
    }
};