#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string X;
  int N;
  cin >> X >> N;
  map<char, char> m;
  int i = 0;
  for (char c = 'a'; c <= 'z'; ++c)
  {
    m.insert({X[i], c});
    ++i;
  }

  vector<pair<string, string>> s;
  for (int i = 0; i < N; ++i)
  {
    string S2;
    cin >> S2;
    string S1 = "";
    for (int j = 0; j < (int)S2.size(); ++j)
    {
      S1 += m[S2[j]];
    }
    s.push_back({S1, S2});
  }
  sort(s.begin(), s.end());
  for (int i = 0; i < N; ++i)
  {
    cout << s[i].second << endl;
  }

  return 0;
}
