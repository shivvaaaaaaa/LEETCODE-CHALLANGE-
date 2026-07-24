class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        int low = 0;
        int high = n-1;

        while(low<=high)
        {
            int guess = (low+high)/2;

            if(a[guess] == target)
            return guess;
            

            if(a[guess] > a[n-1])
            {
                //part 1 hai ye 

                if(a[guess] < target) // part 1
                low = guess+1;
                
                else
                {
                    //ab chhoti value right oor left side dono jagh hai
                    //case 1

                    if(a[0] > target) // go right
                    low = guess + 1;
    
                    else
                    high = guess - 1;  
                } 
            }  
            
            else
            {
                // ab guess part 2 mai aaya hai 
                if(a[guess] > target)
                {
                    // go left
                    high = guess - 1;
                }
                else
                {
                    // bade no toh do jagh hai array ke left oor right side dono jagh
                    // case 1
                    if(a[n-1] < target)
                    high = guess - 1;
                    
                    else
                    low = guess+1;
                    
                }
            }

        }
        return -1;
         
        
    }
};