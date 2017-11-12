#include <iostream>
#include<cmath>

using namespace std;

int main()
{
  double a, y;
  cin>>a;
  if (abs(a) > 3)
    y = 3;
  else
    if ( abs(a) <= 3 )
      y = -abs(a) + 3;
  cout << "y="<< y << endl;
  return 0;
}
