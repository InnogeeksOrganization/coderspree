import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write ur code here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int x=n;x>=0;x--){
            for(int y=1;y<=x;y++){
                System.out.print("*"+"\t");
            }
            System.out.println();
        }


    }
}