#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<vector<int>> v {{1, 0, 1}, {0, 1}, {1, 0, 1}}; 
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}					   
}