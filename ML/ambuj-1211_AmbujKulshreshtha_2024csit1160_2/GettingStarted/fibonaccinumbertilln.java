import java.util.*;
public class fibonaccinumbertilln{
    public static void main(String[] args){
    int n;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    int n1=0,n2=1;
        if(n==1)
        System.out.println(n1);
        else 
        if(n==2)
        System.out.println(n2);
        else{
            System.out.println(n1);
            System.out.println(n2);
    for(int i=3;i<=n;i++){
        int t=n1+n2;
        n1=n2;
        n2=t;
        System.out.println(t);
    }}
    sc.close();
    }
}