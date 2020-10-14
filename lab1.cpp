// 33 варіант
// завдання: Задано сторону квадрата. Знайти його діагональ, периметр та площу.

#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[]) {

  float a;

  cout << "a = ";
  cin>> a;

  cout << "d = " << a * sqrt(2) << '\n';
  cout << "P = " << a * 4 << '\n';
  cout << "S = " << a * a << '\n';

  return 0;
}
