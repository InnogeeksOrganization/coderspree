import java.util.*;
public class primefactor {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
    int n,i=2;
    n=sc.nextInt();
    while(n!=1){
        if(n%i==0){
            n=n/i;
            System.out.print(i+" ");
        }
        else
        {
           i++;
    }
    }
    sc.close();
}}
