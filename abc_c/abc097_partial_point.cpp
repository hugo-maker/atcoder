#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
  string s;
  int K;
  cin >> s >> K;

  set<string> S;
  for (int i = 0; i < s.size(); ++i)
  {
    for (int j = 1; j <= s.size(); ++j)
    {
      string tmp = s.substr(i, j);
      S.insert(tmp);
    }
  }

  auto iter = S.begin();
  for (int i = 0; i < K - 1; ++i)
  {
    ++iter;
  }
  cout << *iter << endl;

  return 0;
}
