import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    
    int p = n / 2;
    int q = -1;
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= p; j++){
        System.out.print("\t");
       }
       System.out.print("*\t");

       for(int j = 1; j <= q; j++){
        System.out.print("\t");
       }
       if(i > 1 && i < n){
        System.out.print("*\t");
       }
       
       if(i <= n / 2){
        p--;
        q += 2;
       } else {
        p++;
        q -= 2;
       }

        System.out.println();
    }

 }
}


 