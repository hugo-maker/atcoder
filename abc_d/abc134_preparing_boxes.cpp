#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1, 0);
  for (int i = 1; i <= N; ++i)
  {
    cin >> A[i];
  }

  vector<int> x(N + 1, 0);
  for (int i = N; i >= 1; --i)
  {
    int sum = A[i];
    for (int j = i * 2; j <= N; j += i)
    {
      sum += x[j];
    }
    x[i] = sum % 2;
  }
  vector<int> ans;
  for (int i = 1; i <= N; ++i)
  {
    if (x[i] == 1)
    {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  for (auto v : ans)
  {
    cout << v << " ";
  }
  cout << endl;
  return 0;
}
