class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr , arr + n);
        sort(dep , dep + n);
    	int ans = 0, req = 0, i = 0, j = 0;
    	while(i < n)
    	{
    	    if(arr[i] <= dep[j])
    	    {
    	        req++;
    	        ans = max(ans , req);
    	        i++;
    	    }
    	    else if(arr[i] > dep[j])
    	    {
    	        req--;
    	        j++;
    	    }
    	}
    	return ans;
    }
};