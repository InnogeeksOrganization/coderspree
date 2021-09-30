import java.util.*;

public class PrintAllPrimesTillN {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int count=0;
        int low=scn.nextInt();
        int high=scn.nextInt();
        for(int i=low;i<=high;i++){
            if(i==0 || i==1){
                count=count+1;
            }
            else{
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        count=count+1;
                    }
                }
            }
            if(count==0){
                System.out.println(i);
            }
            count=0;
        }
    }
}
