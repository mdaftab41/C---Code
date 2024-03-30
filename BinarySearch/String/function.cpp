#include<bits/stdc++.h>
using namespace std;
// Function to find length of character Array
int getlength(char name[]){
   int count =0;
   for( int i=0; name[i]!='\0'; i++) {
    count++;
   }
   return count;
}

//function to Reverse the string 
void reverse( char name[], int n){
   int s=0;
   int e=n-1;
   while(s<e){
      swap(name[s++], name[e--]);
   }
}
//function for palindrome 
bool palindrome( char a[], int n){
   int s=0;
   int e=n-1;
   while(s<=e){
      if(a[s]!=a[e]){
         return 0;
      }
      else{
         s++;
         e--;
      }
   }
   return 1;
}

int main(){
    char name[20];
    cout<<" Enter the name"<<endl;
    cin>> name;
    //  '\0 => null character use terminator
     cout<<" your name is  "<< name<<endl;
     // find length of character
     int length=getlength(name);
     cout<< " Length of "<<name <<"  is  "<<length<<endl;
     reverse(name,length);
     cout<<"Reverse string is : "<< name <<endl;
     cout<<"Cheak the string is plindrome or not  :  "<<palindrome(name,length)<<endl;
     
}
