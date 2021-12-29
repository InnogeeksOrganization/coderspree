import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc= new Scanner(System.in);
    int n= sc.nextInt();
    int a[]=new int[n];
    for(int i=0;i<n;i++)
    a[i]=sc.nextInt();
    int d= sc.nextInt();int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==d){
            System.out.println(d);break;
        }
        else if(a[i]>d)
        break;

    }
    
    
        System.out.println(a[i]);
        System.out.println(a[i-1]);
    
 }

}