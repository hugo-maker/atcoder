#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
  }

  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;

  for (int i = 0; i < N; ++i)
  {
    if (S[i] == "AC")
    {
      ++ac;
    }
    else if (S[i] == "WA")
    {
      ++wa;
    }
    else if (S[i] == "TLE")
    {
      ++tle;
    }
    else if (S[i] == "RE")
    {
      ++re;
    }
  }

  cout << "AC x " << ac << endl; 
  cout << "WA x " << wa << endl; 
  cout << "TLE x " << tle << endl; 
  cout << "RE x " << re << endl; 

  return 0;
}
