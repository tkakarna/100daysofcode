#include<stdio.h>
#include<iostream>
#include<ctime>

using namespace std;

int main () { 
  float data [5];
  float data1, avg1, avg2;
  timespec ts;
  cout << "Please enter the elements one by one\n";
  cin >> data[0] >> data[1] >> data[2] >> data[3] >> data[4];

  float *p1 = &data[0];
  float *p2 = &data[1];
  float *p3 = &data[2];
  float *p4 = &data[3];
  float *p5 = &data[4];

// get ticks per second
  int start_time1 = clock();
  for (int i=0; i<5; i++) {  
    data1 = data[i] + data1;
  }
  avg1 = data1/5;
  int stop_time1 = clock();
  
  int start_time2 = clock();
  avg2 = (*p1+*p2+*p3+*p4+*p5)/5;
  int stop_time2 = clock();
 
  cout << "The avg1 of data is " << avg1 << " @" << start_time1-stop_time1 << "\n";
  cout << "The avg2 of data is " << avg2 << " @" << start_time2-stop_time2 << "\n";

  return(0);
                                                                  
}


  
  
