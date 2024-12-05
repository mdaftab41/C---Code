 #include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     string s="TUF is great for interview preparation";
//     cout<<"Before reversing words: "<<endl;
//     cout<<s<<endl;
//     s+=" ";// adding tralling space to add last word in stack
//     stack<string> st;
//     int i;
//     string str="";
//     for(i=0;i<s.length();i++)
//     {
//         if(s[i]==' ')
//         {
//             st.push(str);
//             str="";
//         }
//         else str+=s[i];
//     }
//     string ans="";
//     while(st.size()!=1)
//     {
//         ans+=st.top()+" ";
//         st.pop(); j
//     }
//     ans+=st.top();// The last word should'nt have a space after it
//     cout<<"After reversing words: "<<endl;
//     cout<<ans;
//     return 0;
// }

 
// string result(string s)
// {
//     int left = 0;
//     int right = s.length()-1;
    
//     string temp="";
//     string ans="";
    
//     //Iterate the string and keep on adding to form a word
//     //If empty space is encountered then add the current word to the result
//     while (left <= right) {
//         char ch= s[left];
//         if (ch != ' ') {
//             temp += ch;
//         } else if (ch == ' ') {
//             if (ans!="") 
//             ans = temp + " " + ans;
//             else
//              ans = temp;
//             temp = "";
//         }
//         left++;
//     }
    
//     //If not empty string then add to the res   ult(Last word is added)
//     if (temp!="") {
//         if (ans!="") 
//         ans = temp + " " + ans;
//         else ans = temp;
//     }
    
//     return ans;    
// }

string wordReverse(string str){
    // creating index
    int start=0 ;
    int end=str.length() ;
    //creating empty string
    string temp="";
    string ans="" ;
    while(start<=end){
        char ch=str[start] ;
        if(ch!=' '){
            temp+=ch ;
        }else if(ch==' '){
            if(ans!="") ans=temp+" "+ans ;
            else ans=temp ;
            temp="" ;
        }
      start++;
    }
    // adding last word
    if(temp!=" ") {
    if(ans!="") ans=temp+" "+ans ;
     else ans=temp ;
    }
    return ans ;
}

int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    //cout<<result(st);
    cout<<wordReverse(st)<<endl;
    return 0;
}