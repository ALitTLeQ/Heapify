#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Homework1.h"
#include "Heapification.h"
#define LENGTH 50000
//#define TESTING
using namespace std;

int
main(int argc, const char **argv) {
  int testData[LENGTH];
  srand(time(NULL));
  
  for (int i = 0; i < LENGTH; i++) {
    testData[i] = rand();
  }

  Homework1 *hw1 = new Homework1();
  ((Heapification *)hw1)->buildHeap(testData, LENGTH);
  ((Heapification *)hw1)->printMetrics();


  for (int i = 1; i < LENGTH; i++) {
    if (testData[(i - 1) / 2] < testData[i]) {
      cout << "Incorrect!" << endl;
	  cout << testData[(i - 1) / 2] << endl;
	  cout << testData[i] << endl;
	  system("pause");
      exit(1);
    }
  }
  
#ifdef TESTING
  for (int i = 0; i < LENGTH; i++)
    cout << testData[i] << " ";
  cout << endl;
#endif
  cout << "correct!" << endl;
  system("pause");
  delete hw1;
  hw1 = NULL;
}



