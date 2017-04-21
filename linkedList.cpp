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
        		this->size++;
        		this->head = aux;
        		this->tail = aux;
    		}else{
        		aux->element = obj;
        		aux->nextElement = NULL;
        		this->tail->nextElement = aux;
        		this->tail = aux;
        		this->size++;
    		}
}

template<typename T>
void LinkedList<T>::remove(T obj){
	if(this->size > 0){
		Node<T> *aux = this->head;
		Node<T> *aux2;
		if(obj == this->head->element){
			this->head = aux->nextElement;
			this->size--;
			delete aux;
		}
		else if(obj == this->tail->element){
			while(aux->nextElement != this->tail){
				aux = aux->nextElement;
			}
			this->tail = aux;
			delete aux->nextElement;
			this->tail->nextElement = NULL;
			this->size--;
		}
		else{
			bool find = false;
			while(aux->nextElement != NULL){
				if(aux->element == obj){
					aux2 = aux;
					find = true;
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
			}else{
				cout<<"there is no "<<obj<<" in this list"<<endl;
			}
		}
	}
}


template<typename T>
void LinkedList<T>::viewList(){
	Node<T> *aux = this->head;
	if(this->size > 0){
		while(aux != NULL){
			cout << aux->element<<" ";
			aux = aux->nextElement;
		}
	}else{
		cout << "List is empty...";
	}
	cout<<endl;
}
