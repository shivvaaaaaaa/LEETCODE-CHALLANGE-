class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
        vector<int>res(temperature.size());
        res[temperature.size() -1] = 0;

        stack<int>st;
        st.push(temperature.size() -1);

        for(int i = temperature.size() - 2; i>=0; i--){

            while(!st.empty() && temperature [st.top()] <= temperature[i]){
            st.pop();
        }

        if(st.empty()){
            res[i] = 0;
        }
        else{
            res[i] = st.top() - i;
        }
        st.push(i);
    }
    return res;
}
};