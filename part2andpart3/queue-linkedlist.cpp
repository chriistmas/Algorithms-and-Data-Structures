#include "Queue.h"

Queue::Queue() {}

Queue::~Queue() {}

void Queue::enqueue(int value) {
	m_list.insertAtEnd(value);
}

int Queue::dequeue() {
	if (m_list.isEmpty()) {
		return -1;
	}
	int value = m_list.m_head->m_data;
	m_list.remove(value);
	return value;
}

int Queue::front() const {
	if (m_list.isEmpty()) {
		return -1;
	}
	return m_list.m_head->m_data;
}

int Queue::back() const {
	if (m_list.isEmpty()) {
		return -1;
	}
	node* current = m_list.m_head;
	while (current->m_next) {
		current = current->m_next;
	}
	return current->m_data;
}

bool Queue::empty() const {
	return m_list.isEmpty();
}

int Queue::size() const {
	return m_list.size();
}

void Queue::print() const {
	m_list.print();
}
