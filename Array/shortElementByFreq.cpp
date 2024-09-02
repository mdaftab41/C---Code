#include <bits/stdc++.h>
using namespace std;


void sort2darray(int array2d[2][100], int k)
{
  for (int i = 0; i < k - 1; i++)
  {
    for (int j = 0; j < k - 1 - i; j++)
    {
      if (array2d[1][j] < array2d[1][j + 1])
      {
        swap(array2d[1][j], array2d[1][j + 1]);
        swap(array2d[0][j], array2d[0][j + 1]);
      }
    }
  }
}
// Function to sort elements of array by frequency
void SortArr(int arr[], int n)
{
  // Step 1: Sort the array
  sort(arr, arr + n);
  // Step 2: Create a 2d array
  int arr2d[2][100];
  int k = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      arr2d[0][k] = arr[i];
      count = 1;
    }
    else if (arr[i] == arr[i - 1])
    {
      count++;
    }
    else
    {
      arr2d[1][k] = count;
      count = 1;
      k++;
      arr2d[0][k] = arr[i];
    }
  }
  arr2d[1][k] = count;
  k++;
 
  // Step 3: sort the 2d array according to frequency
  sort2darray(arr2d, k);
 
  // Step 4: Store the answer in original array
  k = 0;
  int i = 0;
  while (i < n)
  {
    while (arr2d[1][k] > 0)
    {
      arr[i] = arr2d[0][k];
      i++;
      arr2d[1][k]--;
    }
    k++;
  }
}







bool sortele(pair<int, int> a, pair<int, int> b)
{
  if (a.second == b.second)
    return a.first < b.first;
  return a.second > b.second;
}
void Sortelementsbyfreq(int arr[], int n)
{
  unordered_map<int, int> map;
  for (int i = 0; i < n; i++)
  {
    map[arr[i]]++;
  }
  vector<pair<int, int>> vec;
  for (auto it = map.begin(); it != map.end(); it++)
  {
    vec.push_back({it->first, it->second});
  }
  sort(vec.begin(), vec.end(), sortele);
  for (int i = 0; i < vec.size(); i++)
  {
    while (vec[i].second > 0)
    {
      cout << vec[i].first << " ";
      vec[i].second--;
    }
  }
  cout << endl;
}
int main()
{
  int arr[] = {3, 3, 5, 2, 1, 1, 2};
  int n = 7;
  Sortelementsbyfreq(arr, n);
  SortArr(arr , n);
  return 0;
}
 