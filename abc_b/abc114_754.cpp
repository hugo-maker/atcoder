#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int min_diff = 1 << 29;
  for (int i = 0; i < S.size(); ++i)
  {
    string temp = S.substr(i, 3);
    int num = stoi(temp);
    int diff = abs(753 - num);
    min_diff = min(min_diff, diff);
  }

  cout << min_diff << endl;

  return 0;
}
