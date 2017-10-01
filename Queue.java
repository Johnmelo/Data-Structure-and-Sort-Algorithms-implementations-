import java.util.*;
public class Queue<T>{
  private Node head;
  private Node tail;
  private int size;

  public Queue(){
    this.head = null;
    this.tail = null;
    this.size = 0;
  }

  public void enqueue(T data){
    Node node = new Node<T>(data);
    if(this.size == 0){
      this.head = node;
      this.tail = node;
    }else{
      Node aux = this.tail;
      node.setPreview(aux);
      aux.setNext(node);
      this.tail = node;
    }
    this.size++;
  }

  public boolean isEmpty(){
    return this.size == 0;
  }

  public void viewlist(){
    Node node = this.head;
    if(!isEmpty()){
      while(node != null){
        System.out.println(node.getData());
        node = node.getNext();
      }
    }else{
      System.out.println("Queue is empty!");
    }

  }

  public T dequeue(){
    Node node = this.head;
    boolean empty = false;
    if(this.size == 0){
      System.out.println("There is no object inside queue!");
      empty = true;
    }else{
      if(this.size == 1){
        this.head = null;
        this.tail = null;
      }else{
        this.head = this.head.getNext();
      }
      this.size--;
      return (T) node.getData();
    }
    return null;
  }
}
