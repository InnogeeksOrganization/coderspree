import java .util.*;
public class countdigitsinanumber {
    public static void main(String[] args){
    int n;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    int c=0;
        while(n!=0){
            n=n/10;
            c++;
        }
        System.out.println(c);
        sc.close();
    }
    
}
