# include<bits/stdc++.h>
using namespace std;
void repeatedCharacterWord( string &str){
    int n =str.length() ;
    int maxiword=0;
    int curr_maxiword=0 ;
    string result="";
    for( int left=0 ; left <n ; ){
        //cout<<left <<" ="<<"left"<<endl;
        int right=left+1;
        //cout<<"right = "<<right<<endl;
        while(str[right]!=' ' && right<n){
            right++;
        }
        int frequency[26]={0};
        curr_maxiword = 0 ;
        // finding frequency 
        for(int index = left ; index < right ; index++){
            frequency[str[index]-'a']++;
        }
        //comparing frequency 
        for(int i=0; i<26 ;i++){
            if(frequency[i]>1){
                curr_maxiword++;
            }
             
           // cout<<frequency[i]<<" ";
        }
        cout<<curr_maxiword;
        cout<<endl;
      //cheaking current maxi 
      if(curr_maxiword>maxiword){
        maxiword=curr_maxiword ;
        result=" ";
        for(int j=left; j<right ;j++){
            result+=str[j] ;
        }
      }
      left=right+1;
    }
    if(result.empty()){
        cout<<"-1"<<endl;
    }else{
        cout<<"word with highest no of repeated letter is : "<<result<<endl ;
    }
}


int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin ,str) ;
    cout<<str <<endl;
    repeatedCharacterWord(str);

    return 0;
}
