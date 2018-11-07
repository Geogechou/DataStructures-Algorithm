/*

The solution of distinguishing between queue is empty and queue is full:
use an array of size n+1,and only allow n elemnets to be stored.
when rear+2==front, which represent queue is full
when rear+1==front, which represetn queue is empty

*/
#include "pch.h"
#include"queue.h"
int main()
{
	Queue<int> q1;
	for (int i = 1; i < 11; i++)
		q1.enqueue(i);
	for (int i = 1; i < 11; i++)
		cout << "dequeue" << q1.dequeue() << endl;

}
