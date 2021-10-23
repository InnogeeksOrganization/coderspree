import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n=scn.nextInt();
        int a=0,b=1,c=0;
        System.out.println("0");
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(i==1 && j==0){
                    System.out.print("1"+"	");
                    j++;
                }
                c=a+b;
                System.out.print(c+"	");
                a=b;
                b=c;
            }
            System.out.println();
        }
    }
}