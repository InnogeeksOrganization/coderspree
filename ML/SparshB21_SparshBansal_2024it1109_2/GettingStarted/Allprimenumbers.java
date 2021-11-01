import java.util.Scanner;

public class Allprimenumbers{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int low = sc.nextInt();
        int high= sc.nextInt();
        int i;
        for(i=low;i<=high;i++)
        {
            if(i%2!=0 || i==2)
            System.out.println(i);
            sc.close();
        }
       }
}