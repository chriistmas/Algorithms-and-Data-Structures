#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	int* m_data;
	int m_size;
	int m_capacity;
	
	void resize();
	
public:
	Vector();
	Vector(int initial_capacity);
	~Vector();
	

	void push_back(int value);
	void push_front(int value);
	int pop_back();
	int pop_front();
	
	int front() const;
	int back() const;
	
	int size() const;
	int capacity() const;
	bool empty() const;
	
	void clear();
	void print() const;
};

#endif
