import java.util.Scanner;
class LightOJ_1225{

  public static void main(String [] args){
  
    Scanner sc=new Scanner(System.in);
 
    int t=sc.nextInt();
    int tcase=1;
    
    while(tcase<=t){
    
      boolean b=true;
      String num=sc.next();
      char [] a=num.toCharArray();
      
      
      for(int i=0, k=a.length-1; k>i; i++, k--){
      
        if(a[i]!=a[k]){
        
          b=false;
          break;
          
        }
      }
      
      if(b==true){
      
        System.out.println("Case "+tcase+": Yes");
      }
      else{
      
        System.out.println("Case "+tcase+": No");
      }

      tcase++;
      
    }
  }
}