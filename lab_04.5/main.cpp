#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
 double x,y,R = 0.0;

    srand((unsigned) time(NULL));


 
 for (int i=0; i<10; i++)
 {
     cout << "R = "; cin >> R;
     cout << "y = "; cin >> y;
     cout << "x = "; cin >> x;
     if ((x*x+y*y<=R*R && x>0 && y>x)||(x*x+y*y<=R*R && x<0 && y<x))
     {
         cout << "yes" << endl;
     }
     else
     {
         cout << "no" << endl;
     }

 }
 cout << endl << fixed;

 for (int i=0; i<10; i++)
 {
  x = -R + rand() * (R+R) / RAND_MAX;
  y = -R + rand() * (R+R) / RAND_MAX;
     if ((x*x+y*y<=R*R && x>0 && y>x)||(x*x+y*y<=R*R && x<0 && y<x))
         cout << setw(8) << setprecision(4) << x << " "
         << setw(8) << setprecision(4) << y << " " << "yes" << endl;
     else
         cout << setw(8) << setprecision(4) << x << " "
         << setw(8) << setprecision(4) << y << " " << "no" << endl;
 }



 return 0;
}



