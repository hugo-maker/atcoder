#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int INF = 1 << 29;

int main()
{
  string S, T;
  cin >> S >> T;

  int min_count = INF;

  for (int i = 0; i <= S.size() - T.size(); ++i)
  {
    int count = 0;
    for (int j = 0; j < T.size(); ++j)
    {
      if (T[j] != S[i + j])
      {
        ++count;
      }
    }
    min_count = min(min_count, count);
  }

  cout << min_count << endl;

  return 0;
}
