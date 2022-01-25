import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int a[][]=new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                a[i][j]=sc.nextInt();

        }
        int s=sc.nextInt();
        int r= sc.nextInt();

        rotate(a,s,r);
        display(a);       
        
    }

    public static void rotate(int[][] a,int s,int r)
    {
        int oned[]=shellToArray(a,s);
        rotateArray(oned,r);
        arrayToShell(a,oned,s);
    }
    public static int[] shellToArray(int a[][],int s)
    {
        int minr=s-1,minc=s-1,maxr=a.length-s,maxc=a[0].length-s;
        int sz=2*(maxr-minr+maxc-minc);
        int oned[]=new int[sz];
        int x=0;
        //left
        for(int i=minr,j=minc;i<=maxr;i++){
        oned[x]=a[i][j];x++;}

        //bottom
        for(int i=maxr,j=minc+1;j<=maxc;j++){
        oned[x]=a[i][j];x++;}

        //right
        for(int i=maxr-1,j=maxc;i>=minr;i--){
        oned[x]=a[i][j];x++;}

        //top
        for(int i=minr,j=maxc-1;j>=minc+1;j--){
        oned[x]=a[i][j];x++;}

        return oned;

    }
    public static void arrayToShell(int a[][],int oned[],int s)
    {
        int minr=s-1,minc=s-1,maxr=a.length-s,maxc=a[0].length-s;
        int x=0;
        //left
        for(int i=minr,j=minc;i<=maxr;i++){
        a[i][j]=oned[x];x++;}

        //bottom
        for(int i=maxr,j=minc+1;j<=maxc;j++){
        a[i][j]=oned[x];x++;}

        //right
        for(int i=maxr-1,j=maxc;i>=minr;i--){
        a[i][j]=oned[x];x++;}

        //top
        for(int i=minr,j=maxc-1;j>=minc+1;j--){
        a[i][j]=oned[x];x++;}

    }

    public static void rotateArray(int oned[],int r)
    {
        r=r%oned.length;
        if(r<0)
        {
            r=r+oned.length;
        }
        reverse(oned,0, oned.length-r-1);
        reverse(oned,oned.length-r ,oned.length-1);
        reverse(oned,0,oned.length-1);
    }
    public static void reverse(int oned[],int l1,int l2)
    {
        while(l1<l2)
        {
            int temp=oned[l1];
            oned[l1]=oned[l2];
            oned[l2]=temp;

            l1++;l2--;
        }
    }


    public static void display(int[][] arr){
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr[0].length; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

}