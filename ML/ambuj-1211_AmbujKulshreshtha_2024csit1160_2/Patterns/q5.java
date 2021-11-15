import java.util.*;
class q5{
    public static void main(String[] args){
    int n;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    int i,j,k,c=1;
    for(i=1;i<=(n+1)/2;i++){
        for(j=(n+1)/2-i;j>=1;j--)
        System.out.print("\t");
        for(k=1;k<=c;k++)
        System.out.print("*\t");
        c+=2;
        System.out.println();
    }
    c=c-4;
    for(i=(n+1)/2-1;i>=1;i--){
        for(j=1;j<=(n+1)/2-i;j++)
        System.out.print("\t");
        for(j=1;j<=c;j++){
            System.out.print("*\t");
        }
        c-=2;
        System.out.println();
    }
    }
}