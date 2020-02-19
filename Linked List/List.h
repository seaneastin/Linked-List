#pragma once
#include "Node.h"
#include "Iterator.h"
template <typename T>

class List
{
protected:

	int m_count;
	Node<T>* m_first;
	Node<T>* m_last;

public:

	T front();
	T back();

	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;


	Iterator<T> begin();
	Iterator<T> end();

	bool isEmpty();

};

template<typename T>
T List<T>::front()
{
	return m_first;
}

template<typename T>
T List<T>::back()
{
	return m_last;
}

template<typename T>
Iterator<T> List<T>::begin()
{
	return Iterator<T>(m_first);
}

template<typename T>
Iterator<T> List<T>::end()
{
	return Iterator<T>(m_last);
}

template<typename T>
bool List<T>::isEmpty()
{
	if (m_first == nullptr)
	{
		return true;
	}
	else return false;
}
