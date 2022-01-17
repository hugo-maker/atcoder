#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  map<int, vector<int>> mp;
  for (int i = 0; i < N; ++i)
  {
    int a;
    cin >> a;
    mp[a].push_back(i + 1);
  }
  for (int i = 0; i < Q; ++i)
  {
    int x, k;
    cin >> x >> k;
    vector<int> & p = mp[x];
    if (p.size() < k)
    {
      cout << - 1 << endl;
    }
    else
    {
      cout << p[k - 1] << endl;
    }
  }
  return 0;
}
