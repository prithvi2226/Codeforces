/**
 * IS your horsehoe on the other hoof cocksucka?
 * @author : Wassgud42069
 * @created : 2022-02-02
**/

import java.util.Scanner;
import java.util.*;

public class HorseShoe{
  public static void main(String[] Args){
    
    Scanner input = new Scanner(System.in);

    int count = 0;

    ArrayList<Integer> al = new ArrayList<Integer>();

    for(int i = 0; i < 4; i ++){
      int x = input.nextInt();

      if(al.contains(x)){
        count ++;
      }

      else{
        al.add(x);
      }

    }

    System.out.println(count);


  }
}

