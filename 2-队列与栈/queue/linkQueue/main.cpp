/*
Linked Queue
front as a empty node that don't store any value, just for simplify enqueue problem
the first element is front->next
the last of Queue is rear
link queue have not problem of queue is full, but exist the problem of queue is empty.
when front->next==NULL, represent queue is empty.
*/
#include "pch.h"
#include "lqueue.h"

int main(){
	LQueue<int> lq;
	for (int i = 1; i < 10; i++)
		lq.enqueue(i);
	for (int i = 1; i < 10; i++)
		cout << lq.dequeue() << endl;
    
}

