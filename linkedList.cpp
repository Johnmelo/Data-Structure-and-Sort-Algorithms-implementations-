#include<iostream>
#include "linkedList.h"

using namespace std;

template<typename T>
LinkedList<T>::LinkedList(){
	this->size = 0;
}

template<typename T>
void LinkedList<T>::insertAtEnd(T obj){
	Node<T> *aux = new Node<T>;
    	if(this->size == 0){
        	aux->element = obj;
        	aux->nextElement = NULL;
        	this->head = aux;
        	this->tail = aux;
    	}else{
        	aux->element = obj;
        	aux->nextElement = NULL;
        	this->tail->nextElement = aux;
        	this->tail = aux;
    	}
	aux->idx = this->size;
	this->size++;	
}

template<typename T>
void LinkedList<T>::remove(T obj){
	bool isDeleted = false;
	int idx = -1;
	if(this->size > 0){
		Node<T> *aux = this->head;
		Node<T> *aux2;
		if(obj == this->head->element){
			this->head = aux->nextElement;
			this->size--;
			delete aux;
			idx = 0;
			isDeleted = true;
		}
		else if(obj == this->tail->element){
			while(aux->nextElement != this->tail){
				aux = aux->nextElement;
			}
			this->tail = aux;
			delete aux->nextElement;
			this->tail->nextElement = NULL;
			this->size--;
			isDeleted = true;
			idx = this->size;
		}
		else{
			bool find = false;
			while(aux->nextElement != NULL){
				if(aux->element == obj){
					aux2 = aux;
					find = true;
					idx = aux->idx;
				}
				aux = aux->nextElement;
			}
			if(find){
				cout<<"removing "<<obj<<" from list..."<<endl;
				aux = this->head;
				while(aux->nextElement != aux2){
					aux = aux->nextElement;
				}
				aux->nextElement = aux2->nextElement;
				this->size--;
				delete aux2;
				isDeleted = true;
			}else{
				cout<<"there is no "<<obj<<" in this list"<<endl;
			}
		}
	}
	if(isDeleted){
		Node<T> *aux = new Node<T>();
		if((idx >= 0) && (idx < this->size)){
			aux = this->head;
                        while(aux != NULL){
                                if(aux->idx > idx)
                                        aux->idx--;
                                aux = aux->nextElement;
                        }
		}
	}
}

template<typename T>
T LinkedList<T>::getElement(int pos){
	Node<T> *aux = this->head;
	T element = NULL;
	if((pos >=0) && (pos < this->size)){
		while(aux != NULL){
			if(aux->idx == pos){
				element = aux->element;
				break;
			}
			aux = aux->nextElement;
		}
	}else{
		cout<<"there is no "<<pos<<" index at list"<<endl;
	}
	return element;
	
}


template<typename T>
void LinkedList<T>::viewList(){
	Node<T> *aux = this->head;
	if(this->size > 0){
		while(aux != NULL){
			cout << aux->element<<"("<< aux->idx<<") ";
			aux = aux->nextElement;
		}
	}else{
		cout << "List is empty...";
	}
	cout<<endl;
}
