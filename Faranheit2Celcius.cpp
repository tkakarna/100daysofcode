#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

float convertftoc (float f, float c);
int main () {
  float f, c;
  int fcount;
 cout << "Enter Faranheit temperature \n";
 cin >> f;
 convertftoc(f, c);
}

float convertftoc (float f, float c) { 

  int count1=0, count2=0 ;
 float div = 0.10; 
 int size;
 c = (5*(f-32))/9;
 
 
 int fcount, ccount;
 ccount = c;
 fcount = f;
 
 if (fcount<0) {
   fcount= fcount * -1;
 }
 else if (fcount==0) {
   count1 =1;
 }
 while (fcount>0) {
   fcount=fcount/10;
   count1++;
 }
 
 if (ccount<0) {
   ccount= ccount * -1;
 }
 else if (ccount==0) {
   count2 =1;
 }
 while (ccount>0) {
   ccount=ccount/10;
   count2++;
 }
 
 // cout << "count1  is " << count1 << "\ncount2 is " << count2 << "\n";

 cout << f << "\t" << "F  =\t" << c << "\tC" << "\n";

}
