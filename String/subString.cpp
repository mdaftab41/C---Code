#include <iostream>

#include<string>

using namespace std;

int foundPattern(string text, string pattern) {
  int N = text.length();
  int M = pattern.length();

  for (int i = 0; i < N; i++) {
    int temp = i;
    int j = 0;
    for (j = 0; j < M; j++) {
      if (text[temp] != pattern[j]) {
        break;
      }
      temp++;
    }
    if (j == M) {
      return i;
    }
  }

  return -1;
}

int main() {
  string text = "takeuforward";
  string pattern = "forward";
  int foundIdx = foundPattern(text, pattern);
  cout << "The substring starts from the index: "<<foundIdx << endl;
  return 0;
}
