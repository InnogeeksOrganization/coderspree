import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int b = scn.nextInt();
    int n1 = scn.nextInt();
    int n2 = scn.nextInt();

    int d = getProduct(b, n1, n2);
    System.out.println(d);
 }

 public static int getProduct(int b, int n1, int n2){
     int sum=0,p=1;
     while(n2!=0){
         int d=n2%10;
         n2=n2/10;
         int z=multiSingleDigit(b,n1,d);
         sum=getSum(b,sum,z*p);
         p=p*10;
     }
     return sum;
 }
 public static int multiSingleDigit(int b,int n1,int rem2)
 {
       int rem1=0,x=0,c=0,quo=0,num=0;
           
           int carry=0;
           while(n1!=0||carry!=0)
           {
            rem1=n1%10;
            x=rem1*rem2+carry;
            if(x>b)
            {
               carry=x/b;
               int a=x%b;
               quo=a*(int)Math.pow(10,c++);
            }
           else{
               carry=0;
               quo=x*(int)Math.pow(10,c++);
           }
           num+=quo;
           n1=n1/10;           
       }
       return num;

 }
 public static int getSum(int b, int n1, int n2){
       int rem1=0,rem2=0,x=0,c=0,quo=0,carry=0,num=0;
       while(n1!=0||n2!=0||carry!=0)
       {
           rem1=n1%10;
           rem2=n2%10;
           x=rem1+rem2+carry;
           if(x>=b)
           {
               carry=x/b;
               quo=(x%b);
               quo=quo*(int)Math.pow(10,c++);
           }
           else{
               carry=0;
               quo=x*(int)Math.pow(10,c++);
           }
           
           
           num+=quo;
           n1=n1/10;
           n2=n2/10;
       }
       return num;

   }

}