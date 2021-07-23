#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  string op = "-+";

  int a = S[0] - '0';
  int b = S[1] - '0';
  int c = S[2] - '0';
  int d = S[3] - '0';

  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 2; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        int sum = a;
        if (i == 1)
        {
          sum += b;
        }
        else
        {
          sum -= b;
        }
        if (j == 1)
        {
          sum += c;
        }
        else
        {
          sum -= c;
        }
        if (k == 1)
        {
          sum += d;
        }
        else
        {
          sum -= d;
        }

        if (sum == 7)
        {
          cout << S[0] << op[i] << S[1] << op[j] << S[2] << op[k] << S[3] << "=7" << endl;
          return 0;
        }
      }
    }
  }
}
