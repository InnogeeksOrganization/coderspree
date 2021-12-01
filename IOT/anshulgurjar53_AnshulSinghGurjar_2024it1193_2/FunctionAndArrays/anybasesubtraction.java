import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int b = scn.nextInt();
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
  
      int d = getDifference(b, n1, n2);
      System.out.println(d);
   }
  
   public static int getDifference(int b, int n1, int n2){
       int rem1=0,rem2=0,x=0,c=0,quo=0,borrow=0,num=0;
       while(n1!=0||n2!=0||borrow!=0)
       {
           rem1=n1%10;
           rem2=n2%10;
           rem2+=borrow;
           //x=rem1+rem2+carry;
           if(rem2<rem1)
           {
               borrow=-1;
               rem2+=b;
               x=rem2-rem1;
               quo=x*(int)Math.pow(10,c++);
           }
           else{
               borrow=0;
               x=rem2-rem1;
               quo=x*(int)Math.pow(10,c++);
           }
           
           
           num+=quo;
           n1=n1/10;
           n2=n2/10;
       }
       return num;

   }
  
}