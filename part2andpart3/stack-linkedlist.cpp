#include "Stack.h"

Stack::Stack() {}

Stack::~Stack() {}

void Stack::push(int value) {
	m_list.insertAtBegin(value);
}

int Stack::pop() {
	if (m_list.isEmpty()) {
		return -1;
	}
	int value = m_list.m_head->m_data;
	m_list.remove(value);
	return value;
}

int Stack::top() const {
	if (m_list.isEmpty()) {
		return -1;
	}
	return m_list.m_head->m_data;
}

bool Stack::empty() const {
	return m_list.isEmpty();
}

int Stack::size() const {
	return m_list.size();
}

void Stack::print() const {
	m_list.print();
}
