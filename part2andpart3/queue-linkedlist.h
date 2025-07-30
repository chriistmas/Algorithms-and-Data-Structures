#ifndef QUEUE_H
#define QUEUE_H

#include "SingleLinkedList.h"

class Queue {
private:
	SingleLinkedList m_list;
	
public:
	Queue();
	~Queue();
	
	void enqueue(int value);
	int dequeue();
	int front() const;
	int back() const;
	bool empty() const;
	int size() const;
	void print() const;
};

#endif
