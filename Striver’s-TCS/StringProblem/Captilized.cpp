#include<bits/stdc++.h>

using namespace std;

void Capitalize(string str, int size) {
  for (int i = 0; i < size; i++) {
    if (i == 0 || i == (size - 1)) // Converting first and last index character to uppercase
    {
      str[i] = towupper(str[i]);
    } else if (str[i] == ' ') // Converting characters present before and afterspace to uppercase
    {
      str[i - 1] = towupper(str[i - 1]);
      str[i + 1] = towupper(str[i + 1]);

    }
  }

  cout<<"String after capitalizing the first and last letter of each word of the string:" << "\n";
  cout << str << "\n";

}
int main() {

  // Input string
  string str = "take u forward Is awesome";
  int size = str.length();

  Capitalize(str, size);
  return 0;
}