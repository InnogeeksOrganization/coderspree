import java.util.*;
class q6{
    public static void main(String[] args){
    int n;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    int i,j,k=1,l,c=1;
    for(i=1;i<=(n+1)/2;i++){
        for(j=(n+1)/2-i+1;j>=1;j--)
        System.out.print("*\t");
        for(k=1;k<=c;k++)
        System.out.print("\t");
        c=c+2;
        for(j=(n+1)/2-i+1;j>=1;j--)
        System.out.print("*\t");
        System.out.println();
    }
    k=k-3;
    for(i=(n+1)/2-1;i>=1;i--){
        for(j=1;j<=(n+1)/2-i+1;j++)
        System.out.print("*\t");
        for(j=k;j>=1;j--)
        System.out.print("\t");
        k-=2;
        for(j=1;j<=(n+1)/2+1-i;j++)
        System.out.print("*\t");
        System.out.println();
    }
    
    }
}