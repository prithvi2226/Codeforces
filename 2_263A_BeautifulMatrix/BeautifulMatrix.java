/**
 * 263A Beautiful Matrix
 * @author : wassgud42069
 * @created : 2022-01-08
**/

import java.util.Scanner;

public class BeautifulMatrix{
  public static void main(String[] args){

    Scanner input = new Scanner(System.in);
    int r = 3;
    int s = 3;
    int row = 0;
    int col = 0;

    for(int i = 1; i <= 5; i++){
      String S = input.nextLine().replace(" ", "");
      if(S.contains("1")){
        row = i;
        col = S.indexOf("1") + 1;
        break;
      }
    }

    //int pr;
    //pr = Math.abs(row - r) + Math.abs(col - s);

    //System.out.print(pr);
    System.out.println(Math.abs(s - row) + Math.abs(r - col));




    }


}




