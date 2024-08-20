#include<bits/stdc++.h>
using namespace std;

bool seach2D(vector<vector<int>>&matrix , int target){
    int row=matrix.size() ;
    int col=matrix[0].size() ;
    int rowIndex=0 ;
    int colIndex=col-1 ;
    while(rowIndex<row && colIndex>=0){
        int element =matrix[rowIndex][colIndex] ;//last col first row element 
        if(element==target){
        return true ;
        }
        if(element<target){
            rowIndex++;
        }else{
            colIndex-- ;
        }
    }
    return false ;
}

int main(){
    vector<vector<int>> v {  {-5,4,7,11,15}, {2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18, 21,23,26,30}}; 
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
    if(seach2D(v,-5)){
		cout<<"Element is Found"<<endl;
	}else{
		cout<<"Element is not Found"<<endl;
	}
    return 0 ;
}