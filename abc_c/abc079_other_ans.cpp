#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  for (int bit = 0; bit < (1 << 3); ++bit)
  {
    int sum = S[0] - '0';
    for (int i = 0; i < 3; ++i)
    {
      if (bit & (1 << i))
      {
        sum += S[i + 1] - '0';
      }
      else
      {
        sum -= S[i + 1] - '0';
      }
    }
    if (sum == 7)
    {
      cout << S[0];
      for (int i = 0; i < 3; ++i)
      {
        if (bit & (1 << i))
        {
          cout << "+";
        }
        else
        {
          cout << "-";
        }
        cout << S[i + 1];
      }
      cout << "=7" << endl;
      return 0;
    }
  }
}
