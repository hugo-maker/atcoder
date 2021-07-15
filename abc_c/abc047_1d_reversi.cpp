#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int cnt = 0;
  for (int i = 1; i < S.size(); ++i)
  {
    if (S[i - 1] != S[i])
    {
      ++cnt;
    }
  }

  cout << cnt << endl;
  return 0;
}
