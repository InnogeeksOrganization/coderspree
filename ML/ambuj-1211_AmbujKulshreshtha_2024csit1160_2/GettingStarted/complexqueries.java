import java.util.Scanner;
import java.lang.Math;
public class complexqueries {
    public static void main(String[] args){
    System.out.println();
    int n,q,l,d,r;
    double k;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    q=sc.nextInt();
    double a[]=new double[n];
    int qa[]=new int[q];
        for(int i=0;i<n;i++){
            a[i]=i;
        }
        for(int i=0;i<q;i++){
            qa[i]=sc.nextInt();
            double p=0;
            if(qa[i]==0){
                l=sc.nextInt();
                r=sc.nextInt();
                for(int j=l;j<=r;j++){
                p=p+(Math.cos(2*a[j])/(Math.cos(a[j])-Math.sin(a[j])));//cos ke bracket mai double hona chahiye
                }
                k=Math.floor(p);//floor outputs double
                System.out.println(k);
            }
            else if(qa[i]==1){
                l=sc.nextInt();
                r=sc.nextInt();
                d=sc.nextInt();
                for(int j=l;j<=r;j++){
                    a[j]=a[j]+d;
                }
            }

        }
        sc.close();
    }
}
