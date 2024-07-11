#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int i=1, j=0;
    	int plat = 1, result =1;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        plat++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        plat--;
    	        j++;
    	    }
    	    if(plat>result){
    	        result = plat;
    	    }
    	}
    	return result;
    }
};