#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    unordered_set<int> numSet;
    int missingNumber, repeatingNumber;

    for (int i = 0; i < n; i++) {
        if (numSet.count(arr[i]) == 0) {
            numSet.insert(arr[i]);
        } else {
            repeatingNumber = arr[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (numSet.count(i) == 0) {
            missingNumber = i;
            break;
        }
    }

    return make_pair(missingNumber, repeatingNumber);
	
}
