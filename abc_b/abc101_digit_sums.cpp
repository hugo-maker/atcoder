#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int n = N;
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }

  if (N % sum == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
