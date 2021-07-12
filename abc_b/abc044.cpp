#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string w;
  cin >> w;
  vector<int> v(26, 0);

  for (int i = 0; i < w.size(); ++i)
  {
    ++v[w[i] - 'a'];
  }

  for (int i = 0; i < 26; ++i)
  {
    if (v[i] % 2 == 1)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
