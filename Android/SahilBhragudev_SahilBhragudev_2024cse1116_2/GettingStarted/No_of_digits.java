import java.util.*;
  
  public class No_of_digits{
  
  public static void main(String[] args) {
    // write your code here  
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int digit,count=0;
    while(n!=0)
    {
        digit = n%10;
        if(digit>=0 && digit<=9)
        {
            count++;
        }
        n=n/10;
    }
    System.out.println(count);
   }
  }
