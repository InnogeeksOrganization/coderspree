import java.io.*;
import java.util.*;

public class Main {

  public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int c=-1;
    for(int i=0;i<n;i++){
        c++;
        for(int j=0;j<n;j++){
            if(c<=n/2){
                if(j==0||j==n-1|| i+j==n-1||i==j){
                    System.out.print("*"+"\t");
                }
                else{
                    System.out.print("\t");
                }
            }
            else if(c>n/2){
                if(j==0 ||j==n-1){
                    System.out.print("*"+"\t");
                }
                else{
                    System.out.print("\t");
                }
            }
        }
        System.out.println();
    }
  }

}