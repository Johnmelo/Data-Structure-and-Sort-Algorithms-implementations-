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

  public void viewlist(){
    Node node = this.head;
    while(node != null){
      System.out.println(node.getData());
      node = node.getNext();
    }
  }

  public void dequeue(T data){
    System.out.println("Inside dequeu");
    Node node = this.head;
    Node aux = null;
    boolean finded = false;
    if(this.size > 0){
      while((node != null) && (!finded)){
        if(node.getData() == data){
          finded = true;
          aux = node;
          break;
        }
        node = node.getNext();
      }
      if(finded){
        System.out.println("founded!");
        if(data == this.head.getData()){
          if(this.size > 1){
            this.head.getNext().setPreview(null);
            this.head = this.head.getNext();
          }else{
            this.head = null;
            this.tail = null;
          }
        }else if(data == this.tail.getData()){
          this.tail.getPreview().setNext(null);
          this.tail = this.tail.getPreview();
        }else{
          Node a = aux.getPreview();
          System.out.println(a.getPreview().getData()+" -- "+ a.getNext().getData());
          if(a != null){
            System.out.println("changed!");
            a.setNext(aux.getNext());
            aux.getNext().setPreview(a);
          }
        }
        this.size--;
      }else{
        System.out.println("Object not founded!");
      }
    }else{
      System.out.println("empty queue!");
    }
  }
}
