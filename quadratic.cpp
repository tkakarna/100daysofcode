// Solve the quadratic equation:
// a*x^2 + b*x + c = 0

#include <iostream>
#include <cmath>  //for the sqrt() function
using namespace std;

int main(){

  double root1, root2, a, b, c, root;

  int temp1,temp2,temp3;

  cout << "Enter the coefficients, a, b, c \n";
  cin >> a >> b >> c;

  temp1=a;
  temp2=b;
  temp3=c;

  if (a==0) {
     cout << "a is zero or undefined \n";
  }
  else {
    if ((temp1==0) | (temp2==0) | (temp3==0)) {
      cout << "Undefined coefficients \n";
    }
    else
    {
      root = sqrt(b*b - 4.0 * a * c);
      if (!(root > 0)) {
        cout << "The root value is negative, so the coefficients are not valid \n";
      }
      else
        {
          cout << "root = sqrt() - " << root << "\n";
          root1 = ((0.5*(root - b))/ a);
          root2 = ((-0.5*(root + b))/ a);
          cout << "The solutions are " << root1 << " and " << root2 << "\n";
        }
    }
  }
  return(0);
}
