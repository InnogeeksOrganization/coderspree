import java.util.*;

   public class Main{

    public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int sourceBase= scn.nextInt();
    int destBase = scn.nextInt();

    int d = getValue(n, sourceBase, destBase);
    System.out.println(d);
 }

 public static int getValue(int n, int sourceBase, int destBase){
     int d1 = getValueIndecimal(n, sourceBase);
     int d2 = getValueInBase(d1, destBase);
     return d2;
 }

 public static int getValueIndecimal(int n, int b){
    int r,p,i=0;
    int rev=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev+r*(int)(Math.pow(b,i));
        i++;
    }
       return rev;
 }
 public static int getValueInBase(int n, int b){
    int rv = 0;

   int p = 1;
   while(n > 0){
       int d = n % b;
       n = n / b;
       rv += p * d;
       p = p * 10;
   }

    return rv;
}
}
                        
                                