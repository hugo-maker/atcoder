#include <iostream>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  int sum = 0;
  for (int i = 0; i < N; ++i)
  {
    int A;
    cin >> A;
    if (i % 2 == 1)
    {
      --A;
    }
    sum += A;
  }
  if (X >= sum)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
