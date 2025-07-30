#include "Queue.h"
#include <iostream>

Queue::Queue() : m_vector() {
}

Queue::Queue(int initial_capacity) : m_vector(initial_capacity) {
}

void Queue::enqueue(int value) {
	m_vector.push_back(value);
}

int Queue::dequeue() {
	return m_vector.pop_front();
}

int Queue::front() const {
	return m_vector.front();
}

int Queue::back() const {
	return m_vector.back();
}

bool Queue::empty() const {
	return m_vector.empty();
}

int Queue::size() const {
	return m_vector.size();
}

void Queue::print() const {
	for (int i = 0; i < m_vector.size(); i++) {
		std::cout << m_vector[i] << " ";
	}
	std::cout << std::endl;
}
