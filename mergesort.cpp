#include<iostream>
#include "linkedList.cpp"

void split(LinkedList<int> *l, LinkedList<int> *l1, LinkedList<int> *l2){
	int control = l->size - 1;
	for(int i = 0; i <= control, i++){
		if(i <= control/2){
			l1->insertAtEnd(l->get(i));
		}else{
			l2->insertAtEnd(l->get(i));
		}
	}
}
template<typename T>
LinkedList<T>* merge(LinkedList<T> *l1, LinkedList<T> *l2){
	LinkedList<T> *l = new LinkedList<T>();
	while(!(l1->size == 0) && !(l2->size == 0)){
	}
}

template<typename T>
LinkedList<T> mergesort(LinkedList<T> *l){
	if((l->size == 1) || ( l->size == 0)){
		return l;
	}
	LinkedList<T> *l1 = new LinkedList<T>();
	LinkedList<T> *l2 = new LinkedList<T>();
	split(l,l1,l2);
	return merge(mergesort(l1),mergesort(l2)); 
}
