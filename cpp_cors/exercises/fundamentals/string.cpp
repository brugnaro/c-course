#include <iostream>
using namespace std;

int main(){
  int x = 0;

  string title = "Mr. ";
  string name("John");
  string end(10, '!');

  cout << name.size() << endl;
  cout << name.back() << endl;
  cout << name[1] << endl;
  cout << end << endl;

  // string concatenation
  cout << title + name << endl;
  cout << title << endl;
  cout << name << endl;

  // name = name + " Doe";
  name += " Doe";
  name.append(end);
  cout << title + name << endl;

  cout << title.append(name) << endl;
  cout << title << endl;

  return 0;
}