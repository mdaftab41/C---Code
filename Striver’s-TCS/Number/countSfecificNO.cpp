#include <bits/stdc++.h>
using namespace std;

// the function accept two argement  m and n which are integers . 
//you are required to calculate the count of numbers having 1, 4, 9 as their digit 
//like 119 ,999 ,111,141,149 , 444 ,etc lies in the range m and n both 
//inclusive  and return the same . Return -1 if m>n

int countSpecificNumber( int m , int n){
    if(m >n){
        return -1;
    }
    int count =0 ;
    bool flag=true ;
    
    for(int i= m ; i<=n ; i++ ){
          int temp = i ;
     while(temp>0)  { 
        int digit=temp%10 ;
        if(digit==1 || digit==4 ||digit==9){
            flag=true ;  
        }else{
            flag=false ;
            break;
        }
        temp /=10 ;
        }
        if(flag==true){
            count++ ;
        }
        
     
    }
    return count;
}

int main(){
    int n ,m ;
    cout<<"Enter the value of m ,n " <<endl;
 cin>>m >> n;
 cout<<"Range "<<m <<" to " <<n<<endl;
 int result= countSpecificNumber(m ,n) ;
 cout<<"Number Lies between "<<m <<" and "<<n  <<" is "<<result <<endl;
 return 0 ;
}