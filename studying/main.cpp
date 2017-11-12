#include <iostream>
#include<cmath>

using namespace std;

void zadacha1()
{
  double a, y;
  cin>>a;
  if (abs(a) > 3)
    y = 3;
  else
    if ( abs(a) <= 3 )
      y = -abs(a) + 3;
  cout << "y="<< y << endl;
}

void zadacha2()
{
  double x, y;
  cin >> x >> y;
  if( ((x - 3) * (x - 3) + y * y <= 9) || ((x - 3) * (x - 3) + (y - 3) * (y - 9) <= 9) )
    cout << "YES!" << endl;
  else
    cout << "NO!" << endl;
}

int main()
{
  zadacha1();
  zadacha2();
  return 0;
}
