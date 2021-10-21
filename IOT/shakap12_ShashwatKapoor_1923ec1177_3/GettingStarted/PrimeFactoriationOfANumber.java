import java.util.*;

public class Main{

public static void main(String[] args) {
  // write your code here  \
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    for(int x=2;x<=(int)Math.sqrt(n);x++){
        while(n%x==0){
            System.out.print(x+" ");
            n=n/x;
        }
    }
    if(n>2){
        System.out.print(n);
    }
 }
}