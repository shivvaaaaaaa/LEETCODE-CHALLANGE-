class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        vector<int>res(arr.size());
        
        res[arr.size() - 1] = -1;
        
        stack<int>st;
        st.push(arr[arr.size() - 1]);
        
        for(int i = arr.size()-2; i>=0; i--){
            
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            
            if(st.empty()){
                res[i] = -1;
            }
            
            else{
                res[i] = st.top();
            }
            st.push(arr[i]);
        }
        return res;
    }
};