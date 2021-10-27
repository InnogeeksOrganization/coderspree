import java.util.*;

public class Main{

public static void main(String[] args) {
  // write your code here  
  Scanner sc=new Scanner(System.in);
  int n=sc.nextInt();
  int c=1;
  int sum=0;
  while(n!=0){
      int dig=n%10;
      sum=sum+ c*(int)Math.pow(10,dig-1);
      n=n/10;
      c++;
  }
  System.out.println(sum);
}
}   