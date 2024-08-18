#include <iostream>
#include <vector>
using namespace std ;
vector<int> wavePrint(vector<vector<int>>arr , int nRow, int mCol){
    vector<int>ans;
    for(int col=0 ; col<mCol ; col++){
        if(col%2==0){
            for(int row= 0 ;row<nRow ; row++){
            ans.push_back(arr[col][row]);
            cout<<arr[col][row]<<" " ;
            }
        } else{
       for( int row =nRow-1 ; row>=0 ;row--){
        ans.push_back(arr[col][row]) ;
        cout<<arr[col][row]<<" " ;
        
    }
    }
    }
    return ans ;
}

int main(){
    vector<vector<int>> v {{7, 8, 9}, {2,3, 4}, {5, 6, 7}}; 
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
    cout<<""<<endl ;
    wavePrint(v , 3,3);	
    return 0 ;
}