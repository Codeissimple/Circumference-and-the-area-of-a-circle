#include <iostream>
using namespace std;

const float PI = 3.1415;

int main() {
  
  float radius = 0;
  float circumference = 0;
  float area = 0;
  float diameter = 0;

  cout << "Enter the diameter of a circle: ";
  cin >> diameter;

  radius = diameter / 2.0;
  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  cout << "When a circle has a diameter of: " << diameter << endl;
  cout << "     The area is: " << area << endl;
  cout << "     The circumference is: " << circumference << endl;
  return 0;
}