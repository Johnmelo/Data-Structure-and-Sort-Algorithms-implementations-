import java.util.*;

public class TestQueue{
  public static void main(String args[]){
    Queue q = new Queue<>();
    q.enqueue("oba");
    q.enqueue("baba");
    q.enqueue("tata");
    //q.enqueue(19);
    q.viewlist();
    System.out.println("----------------------");
    q.dequeue();
    q.viewlist();
    System.out.println("----------------------");
    q.dequeue();
    q.viewlist();
    System.out.println("----------------------");
    q.dequeue();
    q.viewlist();
    System.out.println("----------------------");
    q.dequeue();
    q.viewlist();
  }
}
