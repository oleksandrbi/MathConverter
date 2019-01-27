#include <iostream>

using namespace std;

int main()
{
  int num = 1;
  int num1 = 1;
  int num2 = 2;

  cout << "ENTER NUMBER: " << endl;
  int UserNum;
  cin >> UserNum;

  int NewNum = 0;

  for (size_t i = 0; i < UserNum; i++)
  {
    NewNum = num1 + num2;
    cout << "NewNum: " << NewNum << endl;
    num2 = num1;
  }

  return 0;
}
