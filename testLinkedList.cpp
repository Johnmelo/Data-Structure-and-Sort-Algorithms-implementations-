#include <iostream>
#include "linkedList.cpp"

int main(){
LinkedList<int> l = LinkedList<int>();

l.viewList();
l.insertAtEnd(1);
l.insertAtEnd(2);
l.insertAtEnd(3);
l.insertAtEnd(4);
//std::cout<<"view elements"<<std::endl;
l.viewList();
l.remove(5);
l.viewList();
l.remove(1);
l.viewList();
l.remove(4);
l.viewList();
l.remove(2);
l.viewList();
l.remove(3);
l.viewList();
return 0;
}
