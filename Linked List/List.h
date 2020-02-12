#pragma once



template <typename T>

class List
{
Protected:

	int mCount;
	Node<T>* First;
	Node<T>* Last;

Public:

	T front();
	T back();

	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;


	bool isEmpty();

};