#ifndef QUEUE_H
#define QUEUE_H

#include "Vector.h"

class Queue {
private:
	Vector m_vector;
	
public:
	Queue();
	Queue(int initial_capacity);
	
	void enqueue(int value);
	int dequeue();
	int front() const;
	int back() const;
	
	bool empty() const;
	int size() const;
	
	void print() const;
};

#endif
