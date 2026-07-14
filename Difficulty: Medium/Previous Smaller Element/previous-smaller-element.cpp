class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        vector<int>res(arr.size());
        res[0] = -1;
        
        stack<int>st;
        
        for(int i = 0; i<arr.size(); i++){
            
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