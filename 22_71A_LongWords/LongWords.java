/**
 * Way too long wprds 71A codeforces
 * @author : 91996
 * @created : 2022-02-03
**/


import java.util.Scanner;
import java.util.*;
import java.io.*;
import java.lang.*;

public class LongWords{
  public static void main(String[] args){

    Scanner input = new Scanner(System.in);

    int n = input.nextInt();

    for(int i = 0; i < n; i++){

      String s =  input.nextLine();
      int n = s.length();

      if(n > 10){

        char a = s.chartAt(0);
        char b = s.charAt(n-1);

        System.out.print(a);
        System.out.print(n-2);
        System.out.println(b);
      }

      else{
        System.out.println(s);
      }



    }


  }

}












