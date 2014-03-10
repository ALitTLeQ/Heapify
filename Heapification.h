/** This code is modified from Sec. 3.11 of the following book:
 * K. Arnold, J. Gosling and D. Holmes.
 * The Java Programming Language. Addison Wesley, 3rd edition, 2000.
 *
 * PLEASE DO NOT MODIFY THIS FILE
 */

#ifndef HEAPIFICATION_H
#define HEAPIFICATION_H

#include <iostream>
using namespace std;

class Heapification {
private:
  int *values;
  int length;
  unsigned long compareCnt;

public:
  /** Invoked to build the heap */
  void buildHeap(int *data, int length);

  /** Invoked to print the number of comparisons */
  void printMetrics();

  /** Constructor */
  Heapification();

protected:
  /** For extended classes to know the number of elements */
  int getDataLength();
  
  /** For extended classes to compare elements */
  int compare(int i, int j);

  /** For extended classes to swap elements */
  void swap(int i, int j);

  /** Extended classes implement this */
  virtual void doBuildHeap();
};

#endif
