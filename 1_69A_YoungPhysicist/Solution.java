/**
 * //Codeforces 69A Young Physicist
 * @author : wassgud42069
 * @created : 2022-01-07
**/

import java.util.Scanner;

public class Solution{
  public static void main(String args[]){
    //System.out.println("Number of coordinates?");
    
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();

    int [] mat = new int[n*3];

    for(int i = 0; i < n*3; i++)
    {
      mat[i] = input.nextInt();
    }

    int a = 0, b = 0, c = 0;

    for(int j = 0; j < n*3; j+=3)
    {
      a = a + mat[j];
      b = b + mat[j+1];
      c = c + mat[j+2];

    }

    if(a == 0 && b == 0 && c == 0){
      System.out.println("YES");
    }
    else{
      System.out.println("NO");
    }






  }
}




