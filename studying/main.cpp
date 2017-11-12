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

void zadacha3()
{
  int x, max, min;
  min = 1000000;
  max = -1000000;
  cin >> x;
  if (x == 0)
  {
    cout<< "End of seq"<<endl;
    return;
  }
  while(x != 0)
  {
    if(x > max)
      max = x;
    if(x < min)
      min = x;
    cin >> x;
  }
  cout<< (double) min / max<< endl;
}

void zadacha4()
{
  int N, M;
  cin >> N >> M;
  if (N >= M)
  {
    cout << "ERROR of input";
    return;
  }
  for (int i = N; i <= M; i++)
  {
    for (int k = 0; k < i; k++)
      cout << i << ' ';
    cout << endl;
  }
}

int main()
{
  zadacha1();
  zadacha2();
  zadacha3();
  zadacha4();
  return 0;
}
