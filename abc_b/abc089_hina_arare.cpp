#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<char> S(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
  }

  for (int i = 0; i < N; ++i)
  {
    if (S[i] == 'Y')
    {
      cout << "Four" << endl;
      return 0;
    }
  }

  cout << "Three" << endl;
  return 0;
}
