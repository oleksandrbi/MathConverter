#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  /*
  cout << endl;
  cout << "ENTER IN FORM: Ax^2+Bx+C=0" << endl;
  cout << "ENTER VALUES:" << endl;
  int a, b, c;
  cin >> a >> b >> c;
  int ansPlus, ansMinus;
  ansPlus = (-b + sqrt(b*b-4*a*c)) / (2*a);
  ansMinus = (-b - sqrt(b*b-4*a*c)) / (2*a);
  cout << "THE ROOTS ARE: " << int(ansPlus) << " & " << int(ansMinus) << endl;
  cout << endl;
  */

  int n, num1 = 0, num2 = 1, numNext = 0;
  std::cout << "ENTER NUMBER TERMS" << '\n';
  std::cin >> n;
  std::cout << " " << '\n';
  for (int i = 1; i <= n; ++i)
  {
    if (i == 1)
    {
      std::cout << num1 << '\n';
      continue;
    }
    if (i == 2)
    {
      std::cout << num2 << '\n';
      continue;
    }
    numNext = num1 + num2;
    num1 = num2;
    num2 = numNext;

    std::cout << numNext << '\n';
  }
  return 0;
}
