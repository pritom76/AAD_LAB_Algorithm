public class App {
    public static void main(String[] args) {
        // Array of activity names
        String[] activity = {"A3", "A2", "A1", "A5", "A6", "A4"};
       
        int[] start = {1, 3, 0, 5, 8, 5};
        
        int[] finish = {2, 4, 6, 7, 9, 9};
        int n = start.length; 
        
        
        printMaxActivities(activity, start, finish, n);
    }

    
    public static void printMaxActivities(String activity[], int start[], int finish[], int n) {
        int i, j;
        System.out.println("Following activities are selected:");


        i = 0;
        System.out.println(activity[i]);

        
        for (j = 1; j < n; j++) {
      
            if (start[j] >= finish[i]) { 
                System.out.println(activity[j]);
                i = j;  
            }
        }
    }
}