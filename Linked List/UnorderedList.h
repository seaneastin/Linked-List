#pragma once
#include "List.h"

template <typename T>
class UnorderedList : List<T>
{
public:

	void search(const T &);
	void insertFirst(const T&);
	void insertLast(const T&);
	void deleteNode(const T&);

};

template<typename T>
void UnorderedList<T>::search(const T &tempinfo)
{
	for (auto i = this->begin(); i != this->end(); ++i)
	{
		if (*i == tempinfo)
		{
			std::cout << "success" << std::endl;
		}
	}
}

template<typename T>
void UnorderedList<T>::insertFirst(const T &tempInfo)
{
	Node<T> * node = new Node<T>;
	node->info = tempInfo;
	if (this->isEmpty())
	{
		this->m_first = node;
		this->m_last = node;
		this->m_count++;
		return;
	}
	node->next = this->m_first;
	this->m_first->previous = node;
	this->m_first = node;
	this->m_count++;
}

template<typename T>
void UnorderedList<T>::insertLast(const T &tempinfo)
{
	Node<T> * node = new Node<T>;
	node->info = tempinfo;
	if (this->isEmpty())
	{
		this->m_first = node;
		this->m_last = node;
		this->m_count++;
		return;
	}
	this->m_last->next = node;
	node->previous = this->m_last; 
	this->m_last = node;
	this->m_count++;
}

template<typename T>
inline void UnorderedList<T>::deleteNode(const T &tempname)
{
	Node<T>* F = &(*this->m_first);
	for (auto i = this->begin(); i != this->end(); ++i)
	{
		if (*i == tempname)
		{
			if (tempname == this->m_first->info)
			{
				
				this->m_first = this->m_first->next;
				this->m_first->previous = nullptr;
				delete F;
				this->m_count--;
				return;
			}

			else
			{
				F->previous->next = F->next;
				F->next->previous = F->previous;
				delete F;
				this->m_count--;
				return;
			}
		}


		F = &(*F->next);
	}

	if (this->m_count = 1 && this->m_first->info == tempname)
	{
		this->m_first = nullptr;
		this->m_last = nullptr;
		delete F;
		this->m_count--;
		return;
	}

		if (tempname == this->m_last->info)
		{
			this->m_last = this->m_last->previous;
			this->m_last->next = nullptr;
			delete F;
			this->m_count--;
			return;
		}

}
