import java.util.*;

public class Main{
    public static void main(String[] args) {
        // write your code here
        Scanner sc=new Scanner(System.in);
        int low=sc.nextInt();
        int high=sc.nextInt();
        for(int x=low;x<=high;x++){
            int c=0;
            for(int y=2;y<=Math.sqrt(x);y++){
                if(x%y==0){
                    c++;
                }
             } 
             if(c==0){
                 System.out.println(x);
             }
        }
    }
}