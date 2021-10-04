import java.util.*;
public class printallprimestilln{
    public static void main(String[] args){
    int low,high;
    Scanner sc=new Scanner(System.in);
    low=sc.nextInt();
    high=sc.nextInt();
    
    for(int i=low;i<=high;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            System.out.println(i);
        }
    }
    sc.close();
    }
}