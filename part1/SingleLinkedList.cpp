#include "SingleLinkedList.h"
#include <iostream>

SingleLinkedList::SingleLinkedList() : m_head(nullptr) {}

SingleLinkedList::~SingleLinkedList() {
	node* current = m_head;
	while (current) {
		node* temp = current;
		current = current->m_next;
		delete temp;
	}
	m_head = nullptr;
}

node** SingleLinkedList::find(int _data) {
	node** pointer = &m_head;
	while (*pointer && (*pointer)->m_data < _data) {
		pointer = &((*pointer)->m_next);
	}
	return pointer;
}

// ----------  1 Single Linked List  -----------
// ----------    1. a    -----------
bool SingleLinkedList::insert(int _data) {
	node** pointer = find(_data);
	if (*pointer && (*pointer)->m_data == _data) {
		return false;
	}
	node* newNode = new node(_data);
	newNode->m_next = *pointer;
	*pointer = newNode;
	return true;
}

// ----------    1. b    -----------
SingleLinkedList* SingleLinkedList::union_arbitrary(SingleLinkedList* A, SingleLinkedList* B) {
	SingleLinkedList* C = new SingleLinkedList();
	node* currentA = A->m_head;
	while (currentA) {
		C->insert(currentA->m_data);
		currentA = currentA->m_next;
	}
	node* currentB = B->m_head;
	while (currentB) {
		C->insert(currentB->m_data);
		currentB = currentB->m_next;
	}
	return C;
}

// ----------    1. c    -----------
SingleLinkedList* SingleLinkedList::union_ordered(SingleLinkedList* A, SingleLinkedList* B) {
	SingleLinkedList* C = new SingleLinkedList();
	node* currentA = A->m_head;
	node* currentB = B->m_head;
	
	while (currentA || currentB) {
		int valueA = currentA ? currentA->m_data : INT_MAX;
		int valueB = currentB ? currentB->m_data : INT_MAX;
		
		if (valueA <= valueB) {
			if (valueA != INT_MAX) C->insert(valueA);
			currentA = currentA ? currentA->m_next : nullptr;
			if (valueA == valueB) {
				currentB = currentB ? currentB->m_next : nullptr;
			}
		} else {
			C->insert(valueB);
			currentB = currentB->m_next;
		}
	}
	
	return C;
}

//debug
void SingleLinkedList::print() const {
	node* current = m_head;
	while (current) {
		std::cout << current->m_data << " ";
		current = current->m_next;
	}
	std::cout << std::endl;
}
