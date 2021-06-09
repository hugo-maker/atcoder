#include <iostream>
using namespace std;

int main()
{
  double V, T, S, D;
  cin >> V >> T >> S >> D;
  double temp = D / V;
  
  if (temp >= T && temp <= S)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }

  return 0;
}
