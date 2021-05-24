#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int temp = 0;
  priority_queue<int> max_length;
  for (size_t i = 0; i < S.size(); ++i)
  {
    if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T')
    {
      ++temp;
      if (i == S.size() - 1)
      {
        max_length.push(temp);
      }
    }
    else
    {
      max_length.push(temp);
      temp = 0;
    }
  }

  cout << max_length.top() << endl;

  return 0;
}
