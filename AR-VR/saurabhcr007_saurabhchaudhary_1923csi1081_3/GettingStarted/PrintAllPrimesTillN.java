import java.util.*;

public class PrintAllPrimesTillN {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int low=scn.nextInt();
        int high=scn.nextInt();
        int count;
        for(int i=low;i<=high;i++){
            count=0;
            for(int j=2;j*j<i;j++){
                if(i%j==0){
                    count++;
                }
                if(count>0){
                    break;
                }
            }
            if(count==0){
                System.out.println(i);
            }
        }
    }
}
