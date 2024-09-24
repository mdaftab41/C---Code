# include<iostream>
# include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int s=0;
    int e= v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
   return v;
}

void vprint( vector<int>v){
        for( int i=0; i<v.size(); i++){
            cout<<v[i]<<"  ";
        }
         cout<<endl;
    }

int main(){
   vector<int> v1;
   
   v1.push_back(6);
   v1.push_back(8);
   v1.push_back(10);
   v1.push_back(12);
   v1.push_back(14);
   v1.push_back(18);
   v1.push_back(28);
    cout<<"print the  array"<<endl;
   vprint(v1);

   vector<int> ans= reverse(v1);
   cout<<"print the reverse array"<<endl;
   vprint(ans);

   return 0;

}

 