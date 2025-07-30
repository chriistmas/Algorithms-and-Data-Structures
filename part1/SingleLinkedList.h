#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

#include "node.h"

class SingleLinkedList {
private:
	node* m_head;
	node** find(int _data);

public:
	SingleLinkedList();
	~SingleLinkedList();

	bool insert(int _data);
	
	static SingleLinkedList* union_arbitrary(SingleLinkedList* A, SingleLinkedList* B);
	
	static SingleLinkedList* union_ordered(SingleLinkedList* A, SingleLinkedList* B);
	
	void print() const;
};

#endif
