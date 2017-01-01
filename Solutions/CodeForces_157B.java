import java.util.*;

public class CodeForces_157B{
  
  public static void main(String [] args){
    
    
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    
    int [] a=new int[n];
    final double  Pi= 2* Math.acos(0.0);
    double sum=0;
    
    for(int i=0 ; i<n ; i++){
      
      a[i]=sc.nextInt();
    }
    
    Arrays.sort(a);
    
    if(n==1){
      
      
      sum=a[0]*a[0]*Pi;
    }
    else if((n & 1)==0){
     
      for(int i=a.length-2 ; i>=0 ; i-=2){
        
        sum= sum + ( (a[i+1]*a[i+1]*Pi) - (a[i]*a[i]*Pi));
      }
    }
    else{
      
      sum= a[0]*a[0]*Pi ;
      for(int i=a.length-2 ; i>=1 ; i-=2){
        
        sum=sum + ( (a[i+1]*a[i+1]*Pi) - (a[i]*a[i]*Pi));
      }
    }
    
    System.out.println(sum);
  }
}