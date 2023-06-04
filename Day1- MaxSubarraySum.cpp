#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxSoFar = arr[0]; 
    long long maxEndingHere = arr[0]; 
    
    for (int i = 1; i < n; i++) {
        maxEndingHere = std::max((long long)arr[i], maxEndingHere + arr[i]);
        maxSoFar = std::max(maxSoFar, maxEndingHere);
    }
    if(maxSoFar<0)
        return 0;
    
    return maxSoFar;
        }