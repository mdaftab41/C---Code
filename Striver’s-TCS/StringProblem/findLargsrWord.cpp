#include <bits/stdc++.h>
using namespace std;

void MaxLengthWords(string str, string &maxWord)
{
       int len = str.length();
       int i = 0, j = 0;


       int min_length = len, max_length = 0, max_start = 0;


       while (j <= len)
       {
              if (j < len && str[j] != ' ')
                     j++;

              else
              {
                     int curr_length = j - i;

                     if (curr_length > max_length)
                     {
                            max_length = curr_length;
                            max_start = i;
                     }
                     j++;
                     i = j;
              }
       }

       maxWord = str.substr(max_start, max_length);
}


void findLargestWord( string &str){
    str+=" ";//adding space for last string 
    int len=str.length();
    string temp="";
    string ans="" ;
    for(int left=0 ; left<len ;left++){
        //cout<<str[left]<<" ";
        if(str[left]!=' '){
            temp+=str[left] ;
        }else{
            //cout<<temp <<"  ---ans --- "<<ans<<endl;
           int len1=temp.length();
           int len2=ans.length();
           if(len1>len2){
            ans=temp ;
            temp=" ";
           }
           temp=" ";
           //cout<<temp <<"  ---ans --- "<<ans<<endl;
        }

    }
    cout<<"String with maximum length is : "<<ans<<endl;
}
int main(){
   cout<<"Find largest Word"<<endl;
  string str;
  cout<<"Enter the string "<<endl;
  getline(cin ,str);
  findLargestWord(str);
  string maxWord;
  MaxLengthWords(str, maxWord);
  cout << "Largest Word is: " << maxWord << endl;
  return 0;
}
