
import java.util.Scanner;

public class maxmin2 {
 public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n;
    n=sc.nextInt();
    int anotherarr[]=new int[n-1];
    int a[]=new int[n];
    for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
    }
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
        max=a[i];
        }
        if(a[i]<min){
        min=a[i];
        }
    }
    int p,q;
    for(p=0;p<n;p++){
        if(a[p]==max){
        for(q=0;q<(n-1);q++){
           
            if(q==p)
                continue;
            anotherarr[q]=a[q];
            
        }
    }
    }
    for(p=0;p<n-1;p++){
        if(a[p]==min){
        for(q=0;q<(n-2);q++){
           
            if(q==p)
                continue;
            anotherarr[q]=a[q];
            
        }
    }
    }int max2=anotherarr[0],min2=anotherarr[0];
    for(int i=0;i<n-2;i++){
        if(anotherarr[i]> max2)
        max2=anotherarr[i];
        if(anotherarr[i]<min2)
        min2=anotherarr[i];
    }
    System.out.print(max2+" "+min2);

 }
}
