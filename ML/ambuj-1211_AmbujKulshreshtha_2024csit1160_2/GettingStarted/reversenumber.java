import java.util.*;
public class reversenumber {
    public static void main(String[] args){
        
            int n;
            Scanner sc=new Scanner(System.in);
            n=sc.nextInt();
            int r;
                while(n>0){
                    
                    r=n%10;
                    n=n/10;
                    // s=(s*10)+r;
                    System.out.println(r);
                }
            //    System.out.println(s);
                // while(s!=0){
                    
                //     r=s%10;
                //     s=s/10;
                   
                // }
                sc.close();
            }
}
