#include <iostream>
#include <vector>
using namespace std;

double averageOfPositives(const vector<int>& arr) {
    int sum = 0;
    int count = 0;

    for (int num : arr) {
        if (num > 0) {
            sum += num;
            count++;
        }
    }
    if (count == 0) return 0;

    return (sum / count) +1;
}

int main() {
    vector<int> arr = {5, 2, -4, 1, 3};
    int  average = averageOfPositives(arr);
    cout << average << endl;

    return 0;
}
