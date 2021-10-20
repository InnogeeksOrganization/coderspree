import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    // write ur code here
    int n=scn.nextInt();
    int c=-1;
    int spaces=0,star=n;
    for(int i=0;i<n;i++){
        c++;
        if(c<=n/2){
            for(int j=0;j<spaces;j++){
                System.out.print("\t");
            }
            for(int k=0;k<star;k++){
                System.out.print("*"+"\t");
            }
            System.out.println();
            star-=2;
            spaces+=1;
        }
        else if(c>n/2){
            for(int j=0;j<n;j++){
                if((i==j || i+j==n-1)&&i!=n-1){
                    System.out.print("*"+"\t");
                }
                else if(i==n-1){
                    for(int k=0;k<i;k++){
                        System.out.print("*"+"\t");
                        break;
                    }
                }
                else{
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
    }
    
  }
