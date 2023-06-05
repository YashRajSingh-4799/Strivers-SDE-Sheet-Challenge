#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
   vector<vector<long long int>> triangle(n);
  // Write your code here.
      for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;
        triangle[i][i] = 1;

      for (int j = 1; j < i; j++) 
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}
