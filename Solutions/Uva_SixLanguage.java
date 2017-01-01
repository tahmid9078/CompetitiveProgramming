import java.util.Scanner;

public class Uva_SixLanguage{
  
  public static void main(String [] args){
    
    Scanner sc=new Scanner(System.in);
    String s;
    for(int t=1 ; t>0 ; t++){
      
      s=sc.nextLine();
      
      if(s.equals("#")){
        
        break;
      }
      
      if(s.equals("HELLO")){    //ENGLISH SPANISH GERMAN FRENCH ITALIAN RUSSIAN
        
        System.out.println("Case "+t+": ENGLISH");
      }
      
      else if(s.equals("HOLA")){  
        
        System.out.println("Case "+t+": SPANISH");
      }
      else if(s.equals("HALLO")){  
        
        System.out.println("Case "+t+": GERMAN");
      }
      else if(s.equals("BONJOUR")){ 
        
        System.out.println("Case "+t+": FRENCH");
      }
      else if(s.equals("CIAO")){   
        
        System.out.println("Case "+t+": ITALIAN");
      }
      else if(s.equals("ZDRAVSTVUJTE")){    
        
        System.out.println("Case "+t+": RUSSIAN");
      }
      else{
        
        System.out.println("Case "+t+": UNKNOWN");
      }
    }
  }
}