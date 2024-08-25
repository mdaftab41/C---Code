#include <iostream>
#include <cstring>
using namespace std;

string removeSpaces(char str[]) {
  int count = 0; // spaces seen so far

  for (int i = 0; str[i]; i++)
    if (str[i] != ' ') { // if whitespace is present
      str[count] = str[i]; // remove whitespace
      count++; // increment the count
    }

  str[count] = '\0';

  return str;
}

string removeWhiteSpaceFun( char str[]){// work like a array
  int index=0 ;
  for(int i=0 ; i<strlen(str) ; i++){
    
    if(str[i]!=' '){
       str[index++] =str[i] ;
    }
    
  }
  str[index] = '\0'; 
  return str ;
}
int main() {
  char str[] = "Take you forward";
  cout << removeSpaces(str)<<endl;
  cout<<removeWhiteSpaceFun(str)<<endl;

  return 0;
}