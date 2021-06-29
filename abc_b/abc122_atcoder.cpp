#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int max_len = 0;
  int count = 0;
  for (size_t i = 0; i < S.size(); ++i)
  {
    char c = S[i];
    if (c == 'A' ||
        c == 'C' ||
        c == 'G' ||
        c == 'T')
    {
      ++count;
    }
    else
    {
      if (max_len <= count)
      {
        max_len = count;
      }
      count = 0;
    }
  }

  if (max_len <= count)
  {
    max_len = count;
  }

  cout << max_len << endl;

  return 0;
}
