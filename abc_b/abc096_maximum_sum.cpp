#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long A, B, C, K;
  cin >> A >> B >> C >> K;

  long long num = 0;
  for (int i = 0; i < K; ++i)
  {
    if (A >= B && A >= C)
    {
      A *= 2;
    }
    else if (B >= A && B >= C)
    {
      B *= 2;
    }
    else if (C >= A && C >= B)
    {
      C *= 2;
    }
  }

  cout << A + B + C << endl;
  return 0;
}
