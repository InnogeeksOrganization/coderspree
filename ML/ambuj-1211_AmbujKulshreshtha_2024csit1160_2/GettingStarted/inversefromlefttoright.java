import java.util.Scanner;

public class inversefromlefttoright{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
    
        int n=sc.nextInt(),c=0,r;
        int nc=n;
        while(n!=0){
            
            n=n/10;
            c++;
        }
        int i=c;
        int arr[]=new int[c+1];
        while(nc!=0){
            r=nc%10;
            nc=nc/10;
            arr[r]=i;
            i--;
        }
        for(int j=1;j<=c;j++){
            System.out.print(arr[j]);
        }
        sc.close();
    }
}