import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
int n=scn.nextInt();

int p=0;
for(int i =n; i>=0;i--)
{
    for(int j =0;j<i;j++)
    System.out.print(" \t");
    p++;
    for(int k=0;k<p;k++)
    System.out.print("*\t");
    System.out.println();
}
        // write ur code here

    }
}