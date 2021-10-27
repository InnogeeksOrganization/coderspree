import java.util.*;
public class isaprimenoornot{
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n;
    int t=sc.nextInt();
    while(t-->0){
        int c=0;
        n=sc.nextInt();
        for(int i=1;i<=n;i++){
            if(n%i==0)
            c++;
        }
        if(c==2)
        System.out.println("prime");
        else
        System.out.println("not prime");
    }
    sc.close();
    }
}