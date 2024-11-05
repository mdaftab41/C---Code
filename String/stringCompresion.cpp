#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int i = 0;
    int count=1 ;
    int ansIndex = 0;
    int n = chars.size();
     for(int i=1 ; i<=n ; i++){
        if(i<n && chars[i] == chars[i-1]){
            count++ ;
        }else{
            chars[ansIndex++]=chars[i] ;
            if(count>1){
                string str=to_string(count) ;
                for( char ch: str){
                     chars[ansIndex++] = ch;
                }
            }
            count=1 ;
        }
     }
    return ansIndex; // Return the new length of the compressed string
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);
    
    cout << "Compressed Length: " << newLength << endl;
    cout << "Compressed Characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;
    
    return 0;
}
