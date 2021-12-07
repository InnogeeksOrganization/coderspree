import java.io.*;
import java.util.*;

public class Main{
    static int x=0,y=1,sum=0;

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    n=n-1;
    fib(n);
    System.out.println(sum);

 }
 public static void fib(int n){
     
     if(n>0){
     sum=x+y;
     x=y;y=sum;//n--;
     fib(--n);
     }
      //System.out.println(sum);
 }

}