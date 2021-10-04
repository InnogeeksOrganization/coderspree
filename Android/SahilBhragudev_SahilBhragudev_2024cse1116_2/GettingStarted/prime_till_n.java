import java.util.*;
public class prime_till_n {
    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        
        int low , high;
        System.out.println("Enter the lower range");
        low = sc.nextInt();
        System.out.println("Enter the higher range");
        high = sc.nextInt();

        
        for(int num=low;num<=high;num++)
        {  int count=0;
            for(int i=1;i<=num;i++)
            {    
               if(num%i==0)
                 {
                   count++;
                 }
            }
            
              if(count==2)
                   {
                      System.out.println(num);
                   }
                  
        }
      
    }
}
