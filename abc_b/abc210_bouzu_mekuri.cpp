#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  for (int i = 0; i < N; ++i)
  {
    if (S[i] == '1')
    {
      if (i % 2 == 0)
      {
        cout << "Takahashi" << endl;
        return 0;
      }
      else
      {
        cout << "Aoki" << endl;
        return 0;
      }
    }
  }
}
