#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> P[i];
  }

  int cnt = 1;
  int min_elem = P[0];
  for (int i = 1; i < N; ++i)
  {
    min_elem = min(min_elem, P[i]);
    if (P[i] <= min_elem)
    {
      ++cnt;
    }
  }

  cout << cnt << endl;
  return 0;
}
