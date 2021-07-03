#include  <iostream>
#include  <vector>
#include  <algorithm>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;

  vector<int> m(N);
  int sum = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> m[i];
    sum += m[i];
  }

  X -= sum;
  sort(m.begin(), m.end());

  int count = N;
  count += X / m[0];

  cout << count << endl;
  return 0;
}
