#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int m=matrix.size(),n=matrix[0].size();
	int row[m],col[n];

	memset(row, 1, sizeof(row));
    memset(col, 1, sizeof(col));
	// Write your code here.
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0){
				col[j]=0;
				row[i]=0;
			}
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(col[j]==0||row[i]==0)
				matrix[i][j]=0;
		}
	}

}