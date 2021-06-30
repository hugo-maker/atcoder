#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> L[i];
  }

  sort(L.begin(), L.end());

  int sum = 0;
  for (int i = 0; i < N; ++i)
  {
    if (i == N - 1)
    {
      if (L[i] < sum)
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    sum += L[i];
  }

  return 0;
}
