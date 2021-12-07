import java.util.*;
import java.io.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);

      int n1 = scn.nextInt();
      int a1[]=new int[n1];
      for(int i=0;i<a1.length;i++){a1[i]=scn.nextInt();}
      int n2 = scn.nextInt();
       int a2[]=new int[n2];
       for(int i=0;i<a2.length;i++){a2[i]=scn.nextInt();}
       int res[]=new int[(int)Math.max(n1,n2)];
       int x=res.length-1,carry=0,num=0,l1=n1-1,l2=n2-1;
       while(x>=0)
       {
           num=carry;
           if(l1>=0){
               num+=a1[l1];
           }
           
           if(l2>=0){
               num+=a2[l2];
           }
           
           carry=num/10;
           num=num%10;

           res[x]=num;
           l1--;l2--;x--;
       }
       if(carry!=0)System.out.println(carry);
       for(int val: res)System.out.println(val);   

   }
  }
  