import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
     Scanner in= new Scanner (System.in);
    int n1= in.nextInt();
    int a[] = new int[n1];
    for(int i=0;i<n1;i++)
    a[i]=in.nextInt();
    
     
    int n2= in.nextInt();
    int b[] = new int[n2];
    for(int i=0;i<n2;i++)
    b[i]=in.nextInt();
    
    if(n1>n2)
    {System.out.println(n1-n2);
    for(int i=0;i<n2;i++)
    System.out.println(a[i]+b[i]);
    
    }
    else
    {System.out.println(n2-n1);
    for(int i=0;i<n1;i++)
    System.out.println(a[i]+b[i]);
    
    }
    
 }

}