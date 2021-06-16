#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int count = 0;
  int max_count = 0;
  for (int i = 0; i < S.size(); ++i)
  {
    char c = S[i];
    if (c == 'R')
    {
      ++count;
    }
    else
    {
      max_count = max(max_count, count);
      count = 0;
    }
  }
  max_count = max(max_count, count);

  cout << max_count << endl;

  return 0;
}
