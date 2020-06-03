#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265358979323846264338327950288L

using namespace std;
int main()
{
  long double A, B, H, M, H_angle, M_angle, HM_angle;
  cin >> A >> B >> H >> M;

  H_angle = (long double)H * 30.0 + (long double)M / 2.0;
  M_angle = (long double)M * 6.0;
  HM_angle = (long double)H_angle - (long double)M_angle;

  cout << fixed;
  cout << setprecision(20);
  cout << sqrtl(powl(A, 2.0) + powl(B, 2.0) - (long double)(2 * A * B * cosl(HM_angle * PI / 180.0))) << endl;
}
