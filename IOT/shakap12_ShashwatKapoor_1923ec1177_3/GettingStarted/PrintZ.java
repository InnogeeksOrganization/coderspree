import java.util.*;

public class Main {

    public static void main(String[] args) {
        // Write your code here
         int k=4;
        for(int x=0;x<5;x++){
            if(k==4 || k==0){
                for(int y=0;y<5;y++)
                System.out.print("*");
            }
            else
            for(int y=0;y<5;y++){
                if(y==k)
                System.out.print("*");
                else
                System.out.print(" ");
            }
            System.out.println();
                k--;
            }

    }
}