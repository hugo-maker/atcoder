#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v(200001, 0);
  int N;
  cin >> N;
  int A;
  for (int i = 0; i < N - 1; ++i)
  {
    cin >> A;
    ++v[A];
  }

  for (int i = 1; i <= N; ++i)
  {
    cout << v[i] << endl;
  }
  return 0;
}
