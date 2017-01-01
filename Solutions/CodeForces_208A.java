import java.util.Scanner;

public class CodeForces_208A{
  
  public static void main(String [] args){
    
    Scanner sc=new Scanner(System.in);
    String a=sc.nextLine();
    
    char [] s=a.toCharArray();
    
    char [] main=new char[200];
    int j=0 , size=0;
    
    for(int i=0 ; i< s.length; i++){
      
      if(s[i]=='W'){
        
        if(i==s.length-1){
          
          main[j]=s[i];
          j++;
          size++;
          
        }
        
        else if(i==s.length-2){
          
          main[j]=s[i];
          j++;
          size++;
          
        }
        else if(s[i+1]=='U' && s[i+2]=='B'){
          
          i+=2;
          if(j!=0 && main[j-1]!=' '){
            
            main[j]=' ';
            j++;
            size++;
          }
        }
        else{
          
          main[j]=s[i];
          j++;
          size++;
        }
      }
      else{
        
        main[j]=s[i];
        j++;
        size++;
      }
    }
    
    for(int i=0; i<size; i++){
      if(main[size-1]==' '){
        
        size--;
      }
      System.out.print(main[i]);
    }
  }
}