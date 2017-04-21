#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.cpp"

template<typename T>
class LinkedList {
	public:
		int size;
		Node<T> *head;
		Node<T> *tail;
		LinkedList();
		void insertAtEnd(T obj);
		void remove(T  obj);
		void viewList();
		//void freePosition(int idx, LinkedList<T> *L);
		//void clearList();
};

#endif

