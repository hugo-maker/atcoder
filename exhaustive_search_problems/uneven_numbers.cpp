#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int count = 0;
  for (int i = 1; i <= N; ++i)
  {
    if (i >= 1 && i < 10)
    {
      ++count;
    }
    if (i >= 100 && i < 1000)
    {
      ++count;
    }
    if (i >= 10000 && i < 100000)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
