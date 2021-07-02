#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  for (int i = 0; i <= 25; ++i)
  {
    int sum = 0;
    for (int j = 0; j <= 14; ++j)
    {
      sum = 4 * i + 7 * j;
      if (sum > N)
      {
        break;
      }
      else if (sum == N)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
