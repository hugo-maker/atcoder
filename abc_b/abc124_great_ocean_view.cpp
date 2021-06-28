#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> H[i];
  }

  int highest = H[0];
  int count = 1;
  for (int i = 1; i < N; ++i)
  {
    if (H[i] >= highest)
    {
      ++count;
      highest = H[i];
    }
  }

  cout << count << endl;

  return 0;
}
