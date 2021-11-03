import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner in= new Scanner (System.in);
        int n= in.nextInt();
        printIncreasing(n); 
    }

    public static void printIncreasing(int n){
           if(n==0)
        return;
          printIncreasing(n-1);
          System.out.println(n);
        
    }

}
