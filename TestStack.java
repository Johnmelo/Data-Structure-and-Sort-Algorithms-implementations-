import java.util.*;

public class TestStack{
  public static void main(String[] args) {
    Stack s = new Stack<>();
    s.push("a");
    s.push("aa");
    s.push("aaa");
    s.push("aaaa");

    s.viewStack();
    System.out.println("-------------------------");

    s.pop();
    s.viewStack();
    System.out.println("-------------------------");

    s.pop();
    s.viewStack();
    System.out.println("-------------------------");

    s.pop();
    s.viewStack();
    System.out.println("-------------------------");

    s.pop();
    s.viewStack();
    System.out.println("-------------------------");
  }
}
