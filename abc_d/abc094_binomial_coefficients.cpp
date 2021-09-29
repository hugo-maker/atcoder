#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>{});
  int ai = a[0];
  vector<pair<int, int>> v;
  for (int j = 1; j < n; ++j)
  {
    int tmp = a[j];
    if (a[j] > ai / 2)
    {
      tmp = ai - a[j];
    }
    v.push_back({tmp, a[j]});
  }
  sort(v.begin(), v.end(), greater<pair<int, int>>{});
  int aj = v[0].second;

  cout << ai << " " << aj << endl;
  return 0;
}
