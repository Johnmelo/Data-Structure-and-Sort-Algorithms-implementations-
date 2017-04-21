#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
	public:
		T element;
		Node<T> *nextElement;
		int idx;
		Node();
		~Node();	
};
#endif
