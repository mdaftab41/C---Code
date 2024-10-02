#include <bits/stdc++.h>
using namespace std;
int main() {
	double num1 = 1, num2 = 3, num3 = 5;
	if (num1 > num2 && num1 > num3) {
		cout <<"The greatest of the three numbers is "<< num1<<endl;
	}
	else if (num2 > num1 && num2 > num3) {
		cout <<"The greatest of the three numbers is "<< num2 <<endl;
	}
	else {
		cout <<"The greatest of the three numbers is "<< num3<<endl;;
	}
   cout<<"Direct using the max function " <<endl;
    cout << "The maximum of the three numbers is "<<max(num1, (num2, num3));
    return 0;
}