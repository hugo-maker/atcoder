#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int N = (int)S.size();

  vector<int> ans(N, 0);
  vector<int> div({0});
  for (int i = 0; i < N;)
  {
    int j = i;
    while (j < N && S[j] == S[i])
    {
      ++j;
    }
    div.push_back(j);

    if (S[i] == 'L')
    {
      int A = div[div.size() - 2] - div[div.size() - 3];
      int B = div[div.size() - 1] - div[div.size() - 2];
      ans[i - 1] = (A + 1) / 2 + B / 2;
      ans[i] = A / 2 + (B + 1) / 2;
    }

    i = j;
  }

  for (int i = 0; i < ans.size(); ++i)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
