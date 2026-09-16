/*************************
* Автор: Решетников Дмитрий *
* Вариант: 6 *
* Название: Линейные *
*************************/
#include <iostream>
using namespace std;

int main() {
  const double PI = 3.14;
  double a, b, c, p, A, B, C;

  cout << "Side a: ";
  cin >> a;
  cout << "Side b: ";
  cin >> b;
  cout << "Side c: ";
  cin >> c;

  p = (a + b + c) / 2;
  A = acos((b * b + c * c - a * a) / (2 * b * c));
  B = asin((b * sin(A)) / a);
  C = 2*atan(sqrt(((p-a)*(p-b))/(p*(p-c))));

  cout << "Angle A: " << A << endl
	     << "Angle B: " << B << endl 
	     << "Angle C: " << C << endl;

  return 0;
}
