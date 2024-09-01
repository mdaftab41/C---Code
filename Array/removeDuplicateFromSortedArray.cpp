 #include <bits/stdc++.h>
using namespace std;

class removeDuplicate {
  public:
    void duplicate(int arr[], int n) {
      int mark[n];
      
      // Initialize all elements of mark[] to 1
      fill(mark, mark + n, 1); 
      //for (int i = 0; i < n; i++) {
      //  mark[i] = 1;
      //}

      // Mark the duplicates
      for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
          for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
              mark[j] = 0;
            }
          }
        }
      }
      
      // Output the elements that are not marked as duplicates
      for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
          cout << arr[i] << " ";
        }
      }
      cout << endl;
    }
};

int main() {
  int arr[] = {4, 3, 3, 9, 2, 9, 2, 4, 1, 10, 89, 34};
  int n = 12;

  removeDuplicate d1;
  d1.duplicate(arr, n);

  return 0;
}
