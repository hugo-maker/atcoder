#include <iostream>
#include <vector>
using namespace std;
const long long MAX = 100001;

int main()
{
  long long N, Q;
  cin >> N;
  vector<long long> v(MAX, 0);
  for (int i = 0; i < N; ++i)
  {
    long long A;
    cin >> A;
    ++v[A];
  }

  long long sum = 0;
  for (int a = 1; a < MAX; ++a)
  {
    sum += a * v[a];
  }

  cin >> Q;
  for (int q = 0; q < Q; ++q)
  {
    long long B, C, tmp;
    cin >> B >> C;

    sum -= B * v[B];
    tmp = v[B];
    v[B] = 0;

    sum += C * tmp;
    v[C] += tmp;

    cout << sum << endl;
  }

  return 0;
}
