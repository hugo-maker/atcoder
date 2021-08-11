#include <iostream>
using namespace std;

long long d(long long a)
{
  long long res = 0;
  while (a)
  {
    ++res;
    a /= 10;
  }

  return res;
}

int main()
{
  long long A, B, X;
  cin >> A >> B >> X;

  long long left = 0, right = 1000000001;
  while (right - left > 1)
  {
    long long mid = (left + right) / 2;
    if (A * mid + B * d(mid) > X)
    {
      right = mid;
    }
    else
    {
      left = mid;
    }
  }
  cout << left << endl;
  
  return 0;
}
