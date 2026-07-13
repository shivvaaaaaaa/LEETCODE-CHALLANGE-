class Solution {
public:
    bool isValid(string s) {

        stack<char>st;

    for(int i = 0; i<s.size(); i++){
            
            // opening bracket insert kro phele stack mai 

            if(s[i] == '('|| s[i] == '{' || s[i] == '[' ){
            st.push(s[i]);
            continue;
        }
         // agar stack mai koi bhi opening elements naa ho toh false return krdo 

         if(st.empty()){
            return false;
            
         }

         if(s[i] ==')'&& st.top() == '(' ){
            st.pop();
            continue;
         }

         if(s[i] == '}' && st.top() == '{'){
            st.pop();
            continue;
         }

         if(s[i] == ']' && st.top() == '[' ){
            st.pop();
            continue;
         }

         // agar koi esa pair na mile toh flase return krdo 

         return false;
        }

        if(!st.empty()){
            return false;
        }
        return true;
    }
};