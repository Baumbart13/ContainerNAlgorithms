//
// Created by Baumbart13 on 28.07.2020.
//

#ifndef CONTAINERNALGORITHM_LINKEDLIST_H
#define CONTAINERNALGORITHM_LINKEDLIST_H

#include <exception>
#include <iostream>

template <class T> struct Node{
	T item;
	Node *next;
	Node *prev;

	Node(T t){
		next = nullptr;
		item = t;
	}
};

template <class T> class LinkedList{
public:
	LinkedList();
	void addFirst(T);
	void addLast(T);
	T get(unsigned);
	unsigned length();
	unsigned getLength();
	void remove(unsigned);

private:
	void increaseLength();
	void increaseLength(unsigned);
	void decreaseLength();
	void decreaseLength(unsigned);

	template <class U> friend class Iterator;
	struct Node<T>* first = nullptr;
	struct Node<T>* last = nullptr;
	unsigned Length = 0;

};

template <class T> class Iterator{
public:
	Iterator(LinkedList<T>* list);
	bool hasNext();
	T next();

private:
	Node<T>* first;
	Node<T>* curr;
};

#endif //CONTAINERNALGORITHM_LINKEDLIST_H
