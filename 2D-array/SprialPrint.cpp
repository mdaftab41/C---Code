#include <bits/stdc++.h>
using namespace std ;

// vector<int> spiralOrder(vector<vector<int>>&matrix){
//     vector<int>ans;
//     int row=matrix.size() ;
//     int col=matrix[0].size();
//     int count=0 ;
//     int total=row*col ;
//     // index initialization 
//     int sRow=0 ;
//     int sCol=0 ;
//     int eRow=row-1;
//     int eCol=col-1;
//     while(count<total){
//        for( int index=sCol ;count<total && index<=eCol ; index++){
//       ans.push_back(matrix[sRow][index]) ;
//       cout<<matrix[sRow][index] <<" ";
//       count++;
//     }
//     sRow++;
    

//      for( int index=sRow ;count<total && index<=eRow ; index++){
//       ans.push_back(matrix[index][eCol]) ;
//       cout<<matrix[index][eCol] <<" ";
//       count++;
//     }
//     eCol--;
  

//   for( int index=eCol ;count<total && index>=sCol ; index--){
//       ans.push_back(matrix[eRow][index]) ;
//        cout<<matrix[eRow][index] <<" ";
//       count++;
//     }
//     eRow--;

//     for( int index=eRow ;count<total && index>=sRow ; index--){
//       ans.push_back(matrix[index][sCol]) ;
//        cout<<matrix[index][sCol]<<" " ;
//       count++;
//     }
//     sCol++;

    
//     }  
//     return ans ;
// }


vector<int> spiralOrder(vector<vector<int>>&matrix){
vector<int>ans ;
    int row=matrix.size()  ;
    int col=matrix[0].size();
    int startcol=0 ;
    int endcol=col-1;
    int startrow=0 ;
    int endrow=row-1 ;
    int total=row*col ;
    int count=0 ;
    while(count<total){
      for( int index=startcol ;index<=endcol &&count<total ;index++){
        ans.push_back(matrix[startrow][index]) ;
        cout<<matrix[startrow][index] <<" " ;
      }
      startrow++;
       for( int index=startrow ;index<=endrow && count<total ;index++){
        ans.push_back(matrix[index][endcol]) ;
        cout<<matrix[index][endcol]<<" " ;
      }
      endcol--;
       for( int index=endcol ;index>=startcol && count<total ;index--){
        ans.push_back(matrix[endrow][index]) ;
        cout<<matrix[endrow][index] <<" " ;
      }
      endrow--;
       for( int index=endrow ;index>=startrow && count<total ; index--){
        ans.push_back(matrix[index][startcol]) ;
        cout<<matrix[index][startcol] <<" " ;
      }
      startcol++ ;
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
    cout<<endl<<"spiralOrder Printing"<<endl ;
    spiralOrder(v) ;
    return 0 ;
}