//
// Created by Baumbart13 on 28.07.2020.
//

#ifndef CONTAINERNALGORITHM_ARRAYLIST_H
#define CONTAINERNALGORITHM_ARRAYLIST_H


template <class T> class ArrayList {
public:
	ArrayList();
	void add(unsigned, T);
	T get(unsigned);
	unsigned length();
	void remove(unsigned);
};


#endif //CONTAINERNALGORITHM_ARRAYLIST_H
