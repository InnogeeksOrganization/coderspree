import java.io.*;
import java.util.*;

public class Main {

	public static void solution(String s){
		//write your code here
		boolean [][]dp = new boolean[s.length()][s.length()];
		for(int g=0;g<s.length(); g++)
		{
		    for (int i=0,j=g;j<s.length();i++,j++)
		    {
		        if(g==0)
		        dp[i][j]=true;
		        
		        else if (g==1)
		        dp[i][j]= s.charAt(i)==s.charAt(j);
		        
		        else
		        {
		            if( s.charAt(i)==s.charAt(j) && dp[i+1][j-1]==true)
            dp[i][j]=true;		        
		        
		        
		        else
		        dp[i][j]=false;
		    }
		    if(dp[i][j]==true)
		    System.out.println(s.substring(i,j+1));
		    }
		    
		
		
	}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		solution(str);
	}

}