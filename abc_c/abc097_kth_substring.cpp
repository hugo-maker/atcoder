#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
  string S;
  int K;

  cin >> S >> K;
  set<string> v;
  for (int i = 0; i < S.size(); ++i)
  {
    for (int j = 1; j <= K; ++j)
    {
      string tmp = S.substr(i, j);
      v.insert(tmp);
    }
  }
  auto iter = v.begin();
  for (int i = 0; i < K - 1; ++i)
  {
    ++iter;
  }
  cout << *iter << endl;

  return 0;
}
