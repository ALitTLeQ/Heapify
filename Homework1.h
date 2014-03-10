#ifndef HOMEWORK1_H
#define HOMEWORK1_H

#include "Heapification.h"

class Homework1 : public Heapification {
protected:
  void doBuildHeap();
  void maxHeapify(unsigned int i);
};

#endif
