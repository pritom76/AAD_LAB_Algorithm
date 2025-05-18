package iitcollectionframework;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

public class collection {
    public static void main(String[] args) {
        
        // Collection<String> c = new ArrayList<String>();
        // c.add("Apple");
        // c.add("Orange");
        // c.add("Jackfruit");
        // c.add("Berry");
        // for(String i:c)
        // System.out.println(i);


      List c = new ArrayList();
        c.add("Apple");
        c.add("Orange");
        c.add("Jackfruit");
        c.add("Berry");
        for(int i=0; i<c.size(); i++){
            System.out.println(c.get(i));
        }   
    }
}
