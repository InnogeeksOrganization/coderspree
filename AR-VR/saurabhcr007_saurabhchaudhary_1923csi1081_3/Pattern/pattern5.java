import java.util.*;

public class pattern5 {
    public static void main(String[] agrs){
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(i+j<n-1 || i>j){
                    System.out.print("   ");
                }
                else{
                    System.out.print("*  ");
                }
            }
            System.out.println("");
        }
    }
}
