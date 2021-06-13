#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N, X;
  string S;
  cin >> N >> X >> S;

  for (int i = 0; i < S.size(); ++i)
  {
    char c = S[i];
    if (c == 'o')
    {
      ++X;
    }
    else if (c == 'x' && X != 0)
    {
      --X;
    }
  }

  cout << X << endl;

  return 0;
}
