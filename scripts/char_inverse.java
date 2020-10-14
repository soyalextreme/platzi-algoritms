

public class StringReverse{
  public String reverseString(String str){
    if(str.isEmpty()){
      return str;
    }else{
      return reverseString(str.substring(1)) + str.charAt(0);
    }
  }

  public static void main(String[] args){
    StringReverse obj = new StringReverse();
    String invertedString = obj.reverseString("Alejandro Andrade Soriano");
    System.out.println(invertedString);
  }
}
