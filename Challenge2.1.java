// Can you determinate if a string has all unique character?
public class Challenge2.1 {
  public static void main(String[] args) {
    table[128] = {0};
    for(char i=0; i>=128; i++) {
      if(table[i] > 0){
        System.out.println("This string is not unique!");
        break;
      } else {
        System.out.println("The string has all unique characters!");
      }
    }
  }
}
