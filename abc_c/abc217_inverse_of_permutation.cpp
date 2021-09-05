#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> v;
  for (int i = 0; i < N; ++i)
  {
    int p;
    int q = i + 1;
    cin >> p;
    v.push_back({p, q});
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < N; ++i)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << v[i].second;
  }
  cout << endl;
  return 0;
}
