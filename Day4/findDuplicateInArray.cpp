#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	unordered_set<int> seen;
    
    
    for (int num : arr) {
        if (seen.count(num) > 0) {
           return num;
        } else {
            seen.insert(num);
        }
    }
    
    return -1;
}
