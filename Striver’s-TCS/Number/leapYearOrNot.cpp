#include<bits/stdc++.h>
using namespace std;
int main() {
	int year ;
    cout<<"Enter the year"<<endl;
    cin>>year ;
	if (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}
}