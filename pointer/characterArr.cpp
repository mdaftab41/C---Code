#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={4,6,9,4,2};
    char ch[6]="abcbf";
    cout<<"Printimg Array Address : "<<arr<<endl;
    cout<<"in case of character array , char array name does not print hte Address but it print the all character"<<endl;
    cout<<"printing the character Array :  "<<ch<<endl;
    char *p=&ch[0];
    cout<<"printing the containt of character array :  "<<p<<endl;
    char temp='s';
    char *q=&temp ;
    cout<<"printing until get the null character  :  "<<q<<endl;
    
    return 0;
}