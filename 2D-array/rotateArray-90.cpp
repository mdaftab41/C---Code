#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateBy90(vector<vector<int>>&matrix ){
	 
	int row=matrix.size() ;
	int col=matrix[0].size();
	vector<vector<int>> ans(row, vector<int>(col));
	for(int i=0 ; i <row ;i++){
		for(int j=0;j<col; j++){
			ans[j][row-i-1]=matrix[i][j];
		}
	}
	return ans ;  
}


int main(){
    vector<vector<int>> v {  {2,3, 4}, {5, 6, 7},{7, 8, 9}}; 
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
        }
		cout<<endl;
	}
	cout<<"Printing Matrix rotated by 90 degree "<<endl;
	vector<vector<int>> result=rotateBy90(v);
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<result[i][j]<<" ";
        }
		cout<<endl;
	}
    
    return 0 ;
}