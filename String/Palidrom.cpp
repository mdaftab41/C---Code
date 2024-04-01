#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char a[], int n){
    int s=0;
    int e= n-1;
    while(s<=e){
        if(a[s] != a[e]){
    return false;
        }
        else{
            s++;
            e--;
        }
    }
     return true;
}

void reverse( char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++] , name[e--]);
    }
    
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0' ; i++){
        count++;
    }
    return count;
}
int main(){
char name[20];
cout<<" Enter the name  ";
cin>>name;
cout<<"Your name is : "<<name<<endl;
int len =getLength(name);//calling function
cout<<"length is "<<len<<endl;
reverse(name, len);
cout<< "your name is "<<name<<endl;

 
cout<<"palidrome or Not "<<checkPalindrome(name ,len)<<endl;

return 0;

}