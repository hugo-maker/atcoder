#include <iostream>
using namespace std;

int f(int n)
{
  int res = 0;
  while (n)
  {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main()
{
  int N;
  cin >> N;
  if (N % f(N) == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
