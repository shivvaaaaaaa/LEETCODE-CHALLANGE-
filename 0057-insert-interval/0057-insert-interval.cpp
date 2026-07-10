class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>arr;
        bool insert = false;

        for(int i =0; i<intervals.size(); i++){
            if(insert == false && intervals[i][0] > newInterval[0]){
                arr.push_back(newInterval);
                insert = true;
            }

                arr.push_back(intervals[i]);
        
        }
            if(insert == false){
                arr.push_back(newInterval);
        }

        // ab merge interval krna hai 

        vector<vector<int>>result;

       int start1 = arr[0][0];
        int end1 = arr[0][1];
        
        for(int i = 1; i<arr.size(); i++){
            int start2 = arr[i][0];
            int end2 = arr[i][1];

            if(end1 >= start2){
                start1 = start1;
                end1 = max(end1 , end2);
            }
            else{
                result.push_back({start1 , end1});
                start1 = start2;
                end1 = end2;
            }
        }
        result.push_back({start1 , end1});
        return result;
    }
};