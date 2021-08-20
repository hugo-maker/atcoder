#include <iostream>
#include <vector>
using namespace std;

vector<long long> v(10, 0);
int digit = 0;

long long f(long long n)
{
  long long res = 0;
  long long tmp = 0;
  while (n)
  {
    tmp = n % 10;
    ++v[tmp];
    res += tmp;
    n /= 10;
    ++digit;
  }
  return res;
}

int main()
{
  long long N;
  cin >> N;
  long long temp = f(N);

  int cnt = 1 << 29;
  int ans = -1;
  if (temp % 3 == 0)
  {
    cnt = 0;
  }
  else if (temp % 3 == 1)
  {
    if (v[1] || v[4] || v[7])
    {
      cnt = 1;
    }
    else if (v[2] == 2 || v[2] && v[5])
    {
      cnt = 2;
    }
  }
  else
  {
    if (v[2] || v[5] || v[8])
    {
      cnt = 1;
    }
    else if (v[1] == 2 || v[1] && v[4] || v[1] && v[7] || v[4] == 2)
    {
      cnt = 2;
    }
  }

  if (cnt < digit)
  {
    cout << cnt << endl;
  }
  else
  {
    cout << -1 << endl;
  }
  return 0;
}
