#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  vector<int> v(N + 1);
  v[0] = 0;
  for (int i = 0; i < N; ++i)
  {
    if (S[i] == 'I')
    {
      v[i + 1] = v[i] + 1; 
    }
    else
    {
      v[i + 1] = v[i] - 1;
    }
  }

  sort(v.begin(), v.end());
  cout << v[N] << endl;
  return 0;
}
