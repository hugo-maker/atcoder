#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<bool, int>> v(N, {false, 0});

  int p;
  string s;
  int ac = 0;
  int wa = 0;
  for (int i = 0; i < M; ++i)
  {
    cin >> p >> s;
    --p;
    if (s == "AC")
    {
      if (!v[p].first)
      {
        v[p].first = true;
        ++ac;
        wa += v[p].second;
      }
    }

    if (s == "WA")
    {
      if (!v[p].first)
      {
        ++v[p].second;
      }
    }
  }

  cout << ac << " " << wa << endl;
  return 0;
}
