#include <iostream>
using namespace std;

// https://pt.cppreference.com/w/cpp/language/types
// https://www.geeksforgeeks.org/c-data-types/?ref=lbp
int main()
{

  bool isAdmin = 0;
  cout << isAdmin << endl;

  // char symbol = '#';
  char symbol('#');
  cout << symbol << endl;

  // datatype modifiers
  // signed unsigned long short
  // unsigned short int age = 31;
  // unsigned long long int age = 31;
  signed int age = 31;
  cout << age << endl;

  float pi = 3.14; // 32 bits - single precision float point type
  const double PI = 3.141592;

  cout << pi << endl;
  cout << PI << endl;

  short int n1 = 1;
  long int n2 = 1;
  unsigned int n3 = 1;
  long long int n4 = 1;
  cout << n1 + n2 + n3 + n4 << endl;

  cout << sizeof(char) << " byte" << endl;
  cout << sizeof(char16_t) << " bytes" << endl;
  cout << sizeof(char32_t) << " bytes" << endl;
  cout << sizeof(wchar_t) << " bytes" << endl;
  cout << sizeof(int) << " bytes" << endl;
  cout << sizeof(long int) << " bytes" << endl;
  cout << sizeof(long long int) << " bytes" << endl;
  cout << sizeof(float) << " bytes" << endl;
  cout << sizeof(double) << " bytes" << endl;

  return 0;
}