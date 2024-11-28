#include <iostream>
#include <string>
using namespace std;

int checkCompressed(string S, string T) {
    int j = 0;
    int count = 0;

    for (int i = 0; i < T.size(); i++) {
        if (T[i] >= '0' && T[i] <= '9') {
            count = count * 10 + (T[i] - '0');
        } else {
            j += count;
            if (j >= S.size() || S[j] != T[i]) {
                return 0;
            }
            count = 0;
            j++;
        }
    }

    j += count;
    return j == S.size() ? 1 : 0;
}

int main() {
    string S = "GEEKSFORGEEKS", T = "G7G3S";
    cout << checkCompressed(S, T) << endl;
    return 0;
}
