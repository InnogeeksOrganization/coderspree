import java .util.*;
public class printdigitofno {
    public static void main(String[] args){
    int n;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    int s=0,r;
        while(n>0){
            
            r=n%10;
            n=n/10;
            s=(s*10)+r;
        }
        
        while(s!=0){
            
            r=s%10;
            s=s/10;
            System.out.println(r);
        }
        sc.close();
    }
    
}
