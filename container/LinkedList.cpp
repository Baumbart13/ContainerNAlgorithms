//
// Created by Baumbart13 on 28.07.2020.
//

#include "LinkedList.h"

/* LinkedList */
template <class T> void LinkedList<T>::increaseLength(){
	this->increaseLength(1);
}

template <class T> void LinkedList<T>::increaseLength(unsigned no){
	this->Length += no;
}

template <class T> void LinkedList<T>::decreaseLength(){
	this->decreaseLength(1);
}

template <class T> void LinkedList<T>::decreaseLength(unsigned no) {
	if(no - this->Lenght < 0){
		this->Length = 0;
		return;
	}

	this->Length -= no;
}

template <class T> LinkedList<T>::LinkedList(){
	this->first = this->last = nullptr;
}

template <class T> void LinkedList<T>::addFirst(T e){
	struct Node<T> *newNode = new Node<T>(e);
	//newNode->item = e;
	newNode->next = this->first;

	if (this->last == nullptr) {
		this->last = newNode;
	}
	this->first = newNode;
}

template <class T> void LinkedList<T>::addLast(T e){
	struct Node<T>* newNode = Node<T>(e);
	//newNode->item = e;

	if(this->first == nullptr){
		this->first = newNode;
	}

	if(this->last != nullptr){
		this->last->next = newNode;
	}
	this->last = newNode;


}

template <class T> T LinkedList<T>::get(unsigned i){
	if(i >= this->length()){
		throw new std::exception();
	}

	unsigned currIndex = -1;
	for(struct Node<T>* n = first; n != nullptr; n = n->next){
		if(++currIndex == i){
			return n->item;
		}
	}
	throw new std::exception();
}

template <class T> unsigned LinkedList<T>::length(){
	unsigned length = 0;

	for(struct Node<T>* n = first; n != nullptr; n = n->next){
		++length;
	}

	return length;
}

template <class T> unsigned LinkedList<T>::getLength(){
	return this->Length;
}

template <class T> void LinkedList<T>::remove(unsigned i){
	if(i > this->getLength()){
		throw new std::exception();
	}

	unsigned currIndex = -1;
	for(struct Node<T>* n = this->first; n != nullptr; n = n->next){
		if(++currIndex == i){
			
		}
	}
}

/* Iterator */

template <class T> Iterator<T>::Iterator(LinkedList<T>* list){
	first = list->first;
	curr = list->first;
}

template <class T> bool Iterator<T>::hasNext() {
	return curr != nullptr;
}

template <class T> T Iterator<T>::next() {
	T temp = curr->item;
	curr = curr->next;
	return temp;
}