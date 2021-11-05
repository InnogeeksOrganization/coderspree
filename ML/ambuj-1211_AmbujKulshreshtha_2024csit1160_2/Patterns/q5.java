import java.util.Scanner;

public class q5 {
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int i,j,c=1,d=n/2;
    for(i=1;i<n;i++){
        for(j=1;j<=d;j++){
            System.out.print(" ");
        }
        d--;

        for(int k=1;k<=c;k++){
            System.out.print("*");
                
        }
        System.out.println();
        c+=2;
    }
    }
}
