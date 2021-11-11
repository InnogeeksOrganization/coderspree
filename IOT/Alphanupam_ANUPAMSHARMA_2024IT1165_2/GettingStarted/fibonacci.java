import java.util.*;
  
  public class Main{
public static void main(String args[])  
{  Scanner scn = new Scanner(System.in);
 int n1=0,n2=1,n3,i;  
 int n = scn.nextInt();
 System.out.println(n1);
 System.out.println(n2);    
    
 for(i=2;i<n;++i)    
 {    
  n3=n1+n2;    
  System.out.println(n3);    
  n1=n2;    
  n2=n3;    
 }}}