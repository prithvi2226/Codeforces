
/*
  Name : Prithvi Prathapan
  Application : CodeForces 282A
  Lang : C++
  Date : 20 - 1 - 23

*/



#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
  
  int res = 0;

  string statement;

  int n;

  cin >> n;


  while(n --){

    cin >> statement;
    
    if(statement[1] == '+'){
      ++res;
    }
    else{
      --res;
    }

  }

  cout << res << endl;

  return 0;
}







/*
#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
  

  int res = 0;

  int statements;

  cin >> statements;

  string statement;

  while(statements --){

    cin >> statement;

    for(int i = 0; i < statement.size(); i ++){

      if(statement[i] == "+" && statement[i+1] == "+"){

        i += 1;

        res += 1;

      }
      else if(statement[i] == "-" && statement[i+1] == "-"){

        i += 1;

        res -= 1;

      }


    }


  }

  cout << res << endl;



  return 0;
}

*/






























/*

#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main(){

  int n, x(0);
  
  string s;


  for(int i = 0; i <= n; i++){

    cin >> s;

  }
  



  return 0;
}


*/