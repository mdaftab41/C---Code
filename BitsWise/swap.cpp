#include <iostream>
#include <utility>
using namespace std;

pair<int, int> get(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return {a, b};
}

int main() {
    int a = 5, b = 10;
    pair<int, int> result = get(a, b);
    cout << "Swapped values: " << result.first << ", " << result.second << endl;
    return 0;
}
