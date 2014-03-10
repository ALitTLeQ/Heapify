/** This code is modified from Sec. 3.11 of the following book:
 * K. Arnold, J. Gosling and D. Holmes.
 * The Java Programming Language. Addison Wesley, 3rd edition, 2000.
 *
 * PLEASE DO NOT MODIFY THIS FILE
 */

#include "Heapification.h"

void Heapification::buildHeap(int *data, int length) {
  values = data;
  this->length = length;
  doBuildHeap();
}

void Heapification::printMetrics() {
  cout << compareCnt << " comparison(s)" << endl;
}

Heapification::Heapification() {
  compareCnt = 0;
  cout << "Your program will be considered incorrect if this line appears twice or more." << endl;
}

int Heapification::getDataLength() {
  return length;
}
  
int Heapification::compare(int i, int j) {
  compareCnt++;
  int i1 = values[i];
  int i2 = values[j];
  if (i1 == i2)
    return 0;
  else return (i1 < i2 ? -1 : 1);
}

void Heapification::swap(int i, int j) {
  int tmp = values[i];
  values[i] = values[j];
  values[j] = tmp;
}

void Heapification::doBuildHeap() {
  cout << "Please override me!" << endl;
}

