package linkedlist;
import java.util.*;

public class collectionLinkedlist {
    public static void main(String[] args) {
        LinkedList c = new LinkedList<>();
        c.add("Apple");
        c.add("Orange");
        c.add("Jackfruit");
        c.add("Berry");
        for(int i=0; i<c.size(); i++){
            System.out.println(c.get(i));
    }
} 
}
