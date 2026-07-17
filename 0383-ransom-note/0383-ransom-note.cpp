class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>have;
        unordered_map<char,int>need;

        for(int i = 0; i<ransomNote.size(); i++){
            need[ransomNote[i]]++;
        }
        for(int i = 0; i<magazine.size(); i++){
            have[magazine[i]]++;
        }

        // ab bas check krna hai min hai ya nahi

        for(auto i : need){
            char c = i.first;
            int f = i.second;

            if(have[c] < f){
                return false;
            }
        }
        return true;

     
        
    }
};