#pragma once
#include "Node.h"


template<typename T>
class Iterator
{
private:
	Node* current;


public:
	Iterator();
	Iterator(Node<T>* ptr);
	T operator*();
	Iterator operator++();
	Iterator operator--();
	bool operator==(const Iterator<T>&)const;
	bool operator!=(const Iterator<T>&)const;
};

template<typename T>
inline Iterator<T>::Iterator()
{
}

template<typename T>
Iterator<T>::Iterator(Node<T>* ptr)
{
	current = ptr;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return T();
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	return Iterator();
}


