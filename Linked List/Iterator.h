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
	return current->info;
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	if (current->next != nullptr)
	{
		current = current->next;
	}
	return *this;
}

template<typename T>
Iterator<T> Iterator<T>::operator--()
{
	if (current->next != nullptr)
	{
		current = current->previous;
	}
	return *this;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>&tempname) const
{
	if (current->info == tempname.current->info)
	{
		return true;
	}
	return false;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>&tempname) const
{
	if (current->info == tempname.current->info)
	{
		return false;
	}
	return true;
}


