import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n=scn.nextInt();
        int spaces=n/2;
        int row=1;
        int val=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<spaces;j++){
                System.out.print("\t");
            }
            int c=val;
            for(int k=0;k<row;k++){
                System.out.print(c+"\t");
                if(k<row/2)
                c++;
                else if(k>=row/2)
                c--;
            }
            
            if(i<n/2){
                spaces--;
                row+=2;
                val++;
            }
            else{
                spaces++;
                row-=2;
                val--;
            }
            System.out.println();
        }

    }
}