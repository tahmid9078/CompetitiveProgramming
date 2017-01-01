import java.util.Scanner;

public class CodeForces_548A{
  
  public static void main(String [] args){
    
    Scanner sc=new Scanner(System.in);
    
    String s=sc.nextLine();
    int k=sc.nextInt();
    boolean res=true;
    char [] a=s.toCharArray();
    char [] ba;
    double breakPoint=a.length/(double)k;
    
    if(breakPoint==(int)breakPoint){
      
      int l=0;
      for(int i=0 ; i<k ; i++){
      
         ba=new char[(int)breakPoint];
        
        for(int j=0 ; j<(int)breakPoint ; j++, l++){
          
          ba[j]=a[l];
          
        }
        
        res=palindrome(ba);
        
        if(res==false){
          
          break;
        }
      }
      
      if(res==true){
        
        System.out.println("YES");
      }
      else{
        
        System.out.println("NO");
        
      }
    }
    else{
    
      System.out.println("NO");
    }
    
  }
  
  static boolean palindrome(char [] a){
    
    boolean b=true;
    
    for(int i=0, k=a.length-1; k>i; i++, k--){
      
      if(a[i]!=a[k]){
        
        b=false;
        break;
        
      }
    }
    
    return b;    
  }
}