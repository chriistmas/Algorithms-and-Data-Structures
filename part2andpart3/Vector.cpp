#include "Vector.h"
#include <iostream>

Vector::Vector() : m_data(nullptr), m_size(0), m_capacity(0) {
	m_capacity = 2;
	m_data = new int[m_capacity];
}

Vector::Vector(int initial_capacity) : m_size(0) {
	m_capacity = initial_capacity > 0 ? initial_capacity : 2;
	m_data = new int[m_capacity];
}

Vector::~Vector() {
	delete[] m_data;
}

void Vector::resize() {
	int new_capacity = m_capacity * 2;
	int* new_data = new int[new_capacity];
	
	for (int i = 0; i < m_size; i++) {
		new_data[i] = m_data[i];
	}
	
	delete[] m_data;
	m_data = new_data;
	m_capacity = new_capacity;
}

void Vector::push_back(int value) {
	if (m_size >= m_capacity) {
		resize();
	}
	m_data[m_size] = value;
	m_size++;
}

void Vector::push_front(int value) {
	if (m_size >= m_capacity) {
		resize();
	}
	
	for (int i = m_size; i > 0; i--) {
		m_data[i] = m_data[i - 1];
	}
	
	m_data[0] = value;
	m_size++;
}

int Vector::pop_back() {
	if (m_size == 0) {
		return -1;
	}
	m_size--;
	return m_data[m_size];
}

int Vector::pop_front() {
	if (m_size == 0) {
		return -1;
	}
	
	int value = m_data[0];
	for (int i = 0; i < m_size - 1; i++) {
		m_data[i] = m_data[i + 1];
	}
	m_size--;
	return value;
}

int Vector::front() const {
	if (m_size == 0) {
		return -1;
	}
	return m_data[0];
}

int Vector::back() const {
	if (m_size == 0) {
		return -1;
	}
	return m_data[m_size - 1];
}

int Vector::size() const {
	return m_size;
}

int Vector::capacity() const {
	return m_capacity;
}

bool Vector::empty() const {
	return m_size == 0;
}

void Vector::clear() {
	m_size = 0;
}

void Vector::print() const {
	for (int i = 0; i < m_size; i++) {
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}
