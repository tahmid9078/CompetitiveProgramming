import java.util.*;

public class CodeForces_58A{
  
  public static void main(String [] args){
    
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    
    char [] a=s.toCharArray();
    
    int [] checker= new int[5];
    boolean [] b=new boolean[4];
    int j=0;
    for(int i=0; i<a.length; i++){
      
      if( a[i]=='h'){
        
        checker[0]=1;
        j++;
      }
      else if( a[i]=='e' && checker[0]==1 && b[0]==false){
        
        checker[1]=1;
        j++;
        b[0]=true;
      }
      else if( a[i]=='l' && checker[1]==1 && b[1]==false){
        
        checker[2]=1;
        b[1]=true;
        j++;
      }
      else if( a[i]=='l' && checker[2]==1 && b[2]==false){
        
        checker[3]=1;
        j++;
        b[2]=true;
      }
      else if( a[i]=='o' && checker[3]==1 && b[3]==false){
        
        checker[4]=1;
        j++;
        b[3]=true;
      }
    }
    
    
    
    if(checker[4]==1){
      
      System.out.println("YES");
    }
    else{
      
      System.out.println("NO");
    }
    
  }
}