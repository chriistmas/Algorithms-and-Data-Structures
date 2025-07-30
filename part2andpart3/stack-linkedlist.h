#ifndef STACK_H
#define STACK_H

#include "SingleLinkedList.h"

class Stack {
private:
	SingleLinkedList m_list;
	
public:
	Stack();
	~Stack();
	
	void push(int value);
	int pop();
	int top() const;
	bool empty() const;
	int size() const;
	void print() const;
};

#endif
