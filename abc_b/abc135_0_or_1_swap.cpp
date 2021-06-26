#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> p[i];
  }

  vector<int> v;
  for (int i = 0; i < N; ++i)
  {
    v.push_back(i + 1);
  }

  int count = 0;

  for (int i = 0; i < N; ++i)
  {
    if (p[i] != v[i])
    {
      ++count;
    }
  }

  if (count <= 2)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
