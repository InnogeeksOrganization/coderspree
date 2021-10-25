import java.util.*;
    
    public class Digits_of_number{
    
    public static void main(String[] args) {
      // write your code here  
      Scanner sc = new Scanner(System.in);
      int n1 = sc.nextInt();
      int digit;
      int n=0,temp;
      while(n1!=0){
          
           temp=n1%10;
           n=n*10+temp;
           n1=n1/10;
         
      }
      while(n!=0)
      {
          digit=n%10;
          System.out.println(digit);
          n=n/10;
      }
     }
    }
