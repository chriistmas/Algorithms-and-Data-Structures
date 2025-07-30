#ifndef STACK_H
#define STACK_H

#include "Vector.h"

class Stack {
private:
	Vector m_vector;
	
public:
	Stack();
	Stack(int initial_capacity);
	
	void push(int value);
	int pop();
	int top() const;
	
	bool empty() const;
	int size() const;
	
	void print() const;
};

#endif
