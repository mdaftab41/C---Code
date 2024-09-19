#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // creating 2d and 3d array 
    int arr1[2][4]; 
    int arr2[2][4][8]; 
  
    // using sizeof() operator to get the size of the above 
    // arrays 
    cout << "Size of array arr1: " << sizeof(arr1) 
         << " bytes" << endl; 
    cout << "Size of array arr2: " << sizeof(arr2) 
         << " bytes"; 
  
    return 0; 
}
 