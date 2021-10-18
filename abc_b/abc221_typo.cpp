#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  vector<int> v;
  for (int i = 0; i < (int)S.size(); ++i)
  {
    if (S[i] != T[i])
    {
      v.push_back(i);
    }
  }

  if (v.size() == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (v.size() == 2)
  {
    if (S[v[0]] == T[v[0] + 1] && S[v[1]] == T[v[1] - 1])
    {
      cout << "Yes" << endl;
      return 0;
    }
    else
    {
      cout << "No" << endl;
      return 0;
    }
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
}
