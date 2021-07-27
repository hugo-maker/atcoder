#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> before(N);
  vector<int> after(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> before[i];
  }

  after = before;
  sort(after.begin(), after.end());

  for (int i = 0; i < N; ++i)
  {
    if (before[i] < after[N / 2])
    {
      cout << after[N / 2] << endl;
    }
    else
    {
      cout << after[N / 2 - 1] << endl;
    }
  }

  return 0;
}
