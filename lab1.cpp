#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[]) {

  float a, b, c, alpha, beta, gamma, PI = 3.14159265;

  cout <<"enter a"<< '\n';
  cin >> a;
  cout <<"enter b"<< '\n';
  cin >> b;
  cout <<"enter c"<< '\n';
  cin >> c;

  alpha = acos((c * c + b * b - a * a)/(2 * b * c));
  beta = acos((c * c + a * a - b * b)/(2 * a * c));
  gamma = acos((b * b + a * a - c * c)/(2 * a * b));

  cout <<"in degrees:"<< '\n';
  cout <<(alpha * 180) / PI<<' '<<(beta * 180) / PI<<' '<<(gamma * 180) / PI<< '\n';

  cout <<"in radians:"<< '\n';
  cout <<alpha<<' '<<beta<<' '<<gamma<< '\n';


  return 0;
}
