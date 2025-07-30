#include "stack-vector.h"
#include <iostream>

Stack::Stack() : m_vector() {
}

Stack::Stack(int initial_capacity) : m_vector(initial_capacity) {
}

void Stack::push(int value) {
	m_vector.push_back(value);
}

int Stack::pop() {
	return m_vector.pop_back();
}

int Stack::top() const {
	return m_vector.back();
}

bool Stack::empty() const {
	return m_vector.empty();
}

int Stack::size() const {
	return m_vector.size();
}

void Stack::print() const {
	for (int i = m_vector.size() - 1; i >= 0; i--) {
		std::cout << m_vector[i] << " ";
	}
	std::cout << std::endl;
}
