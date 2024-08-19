#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>>&matrix , int target){
	int row=matrix.size() ;
	int col=matrix[0].size();
	int start = 0 ;
	int end =row*col-1;
	int mid = start+ (end-start)/2;
	while(start <= end){
		  int element = matrix[mid / col][mid % col];
        
        if (element == target) {
            return true;
        }
        if (element < target) {
            start = mid + 1;
			 
        } else {
            end = mid - 1;
        }
		mid = start + (end - start) / 2; 
		 
	}
	return false;   
}


int main(){
    vector<vector<int>> v {  {2,3, 4}, {5, 6, 7},{7, 8, 9}}; 
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
    if(binarySearch(v,9)){
		cout<<"Element is Found"<<endl;
	}else{
		cout<<"Element is not Found"<<endl;
	}
    return 0 ;
}