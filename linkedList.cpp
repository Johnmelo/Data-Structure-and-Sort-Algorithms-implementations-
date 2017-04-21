#include<iostream>
#include "linkedList.h"


template<typename T>
LinkedList<T>::LinkedList(){

}

template<>
void LinkedList<T>::insertAtEnd(T obj){
	Noh<T> *aux = new Noh<T>;
    		if(this->size == 0){
        		aux->element = obj;
        		aux->nextElement = NULL;
        		this->size++;
        		this->head = aux;
        		this->tail = aux;
    		}else{
        		aux->element = obj;
        		aux->nextElement = NULL;
        		this->tail->next = aux;
        		this->tail = aux;
        		this->size++;
    		}
}

template<>
void LinkedList<T>::remove(T *obj){
	if(this->size > 0){
		Node<T> *aux = this->head;
		Node<T> *aux2;
		if(obj == &this->head->element){
			this->head = aux->next;
			this->size--;
			delete aux;
		}
		else if(obj == &this->tail->element){
			while(aux->next != this->tail){
				aux = aux->next;
			}
			this->tail = aux;
			delete aux->next;
			this->tail->next = NULL;
			this->size--;
		}
		else{
			while(aux->next != NULL){
				if(&aux->element == obj){
					aux2 = aux;
				}
				aux = aux->next;
			}
			aux = this->head;
			while(aux->next != aux2){
				aux = aux->next;
			}
			aux->next = aux2->next;
			this->size--;
			delete aux2;
		}
	}
}


