#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

template<typename T>
class LinkedList {
	public:
		int size;
		Node<T> *head;
		Node<T> *tail;
		void insertAtEnd(T obj);
		void remove(T  *obj);
		T* iterator(int idx);
		void freePosition(int idx, LinkedList<T> *L);
		void clearList();
};

#endif

