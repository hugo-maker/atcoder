#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string S;
  cin >> S;
  
  vector<int> cnt(26, 0);
  for (int i = 0; i < S.size(); ++i)
  {
    ++cnt[S[i] - 'a'];
  }

  for (int i = 0; i < 26; ++i)
  {
    if (cnt[i] > 1)
    {
      cout << "no" << endl;
      return 0;
    }
  }

  cout << "yes" << endl;
  return 0;
}
