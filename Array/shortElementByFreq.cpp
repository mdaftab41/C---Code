#include <bits/stdc++.h>
using namespace std;
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
  return 0;
}
 