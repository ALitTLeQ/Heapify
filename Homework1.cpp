#include "Heapification.h"
#include "Homework1.h"

void Homework1::doBuildHeap() 
{
	for( register int i = (getDataLength()>>1) - 1 ; i >= 0  ; i-- )
		maxHeapify(i);
}

void Homework1::maxHeapify(unsigned int i)
{
	unsigned int length = getDataLength(), max = i,
		left = (i<<1)+1, right = left+1; //Compute the index of children elements

	//Find out the lagest of parent and children elements 
	if( left < length  && compare( left, max ) > 0 )
		max = left;
	if( right < length  && compare( right, max ) > 0 )
		max = right;

	if( max != i )
	{
		swap( i , max );
		maxHeapify( max );
	}
}

