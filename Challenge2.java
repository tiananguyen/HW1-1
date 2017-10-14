/* Can you determinate if a string has all unique character? */
public class Challenge2 {
  public static void main(String[] args) {
    for(char i=0; i < str.length(); i++) {
      for(char j=i; j < str.length(); j++) {
        if((str[i].equals(str[j])) && i!=j) {
          System.out.println("This string is not unique!");
          break;
        } else {
          System.out.println("The string has all unique characters!");
        }
      }
    }
  }
}
