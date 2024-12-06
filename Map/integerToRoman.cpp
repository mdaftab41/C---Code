# include<bits/stdc++.h>
using namespace std ;
string intToRom(int num){
map<int, string> ans;
    ans[1000] = "M";
    ans[900] = "CM";
    ans[500] = "D";
    ans[400] = "CD";
    ans[100] = "C";
    ans[90] = "XC";
    ans[50] = "L";
    ans[40] = "XL";
    ans[10] = "X";
    ans[9] = "IX";
    ans[5] = "V";
    ans[4] = "IV";
    ans[1] = "I";
       auto it=ans.rbegin();
       string temp="" ;
       while(num>0){
            if(num>=it->first){
             temp=temp + it->second ;
             cout<<it.first<<endl ;
             num-=it->first ;
             cout<<num<<endl;
            }else{
                it++;
            }
       }
     return temp;

    }

int main(){
    int num ;
    cout<<"Inter the value of number"<<endl ;
    cin>>num ;
    string str=intToRom(num) ;
    cout<<str<<endl; 
    return 0 ;
}