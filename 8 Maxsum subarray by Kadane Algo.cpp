    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int cursum = 0;
        int maxsum = INT_MIN;
        int i;
        for(i=0; i<n; i++)
        {
            cursum = cursum + arr[i];
            
            if(cursum > maxsum)
            {
                maxsum = cursum;
            }
            
            if(cursum < 0)
            {
                cursum = 0;
            }
        }
        
        return(maxsum);
    }