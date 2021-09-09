#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  vector<string> T(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i] >> T[i];
  }

  for (int i = 0; i < N; ++i)
  {
    for (int j = i + 1; j < N; ++j)
    {
      if (S[i] == S[j] && T[i] == T[j])
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
