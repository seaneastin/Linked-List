#pragma once
#include "Node.h"


template<typename T>
class Iterator
{
private:
	Node<T>* current;


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
Iterator<T>::Iterator()
{

}

template<typename T>
Iterator<T>::Iterator(Node<T>* ptr)
{
	current = ptr;
}

template<typename T>
T Iterator<T>::operator*()
{

}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	if (current->next != nullptr)
	{
		current = current->next;
	}

}

template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	if (current->next != nullptr)
	{
		current = current->previous;
	}

}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>&info) const
{
	current->info = info;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>&) const
{

}


