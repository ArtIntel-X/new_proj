// This program will return all squares and cubes of any numbers
// By made Dmitriy Yershov

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

  void line()
  {
      const float number = 40;
      for(int i = 0; i<number; i++)
      {
          cout << "-";
      }
      cout << endl;
  }

  string text(int a) // а для switch'a
  {
      int *nub_a;
      if(a<3)
      {
          switch (a) 
          {
          case 1: cout << "мистер, вы больны" << endl; break;
          case 2: cout << "введите число"<< endl; break;
          default: cout << "число то не то)" << endl; break;
          }
      }
      else
      {  
          cout << "че то не то число ты вставил для инициализации текста" << endl;   
      }
  }
  
  int func_case1(int help)
  {
      int *val_change;
      val_change = &help;
      for(int i = 0, a = 0; i < 11, a < 11; i++, a++) 
      {   
          cout << setw(10) << pow(*val_change,i) << setw(4) << a << endl;   
      }
  }
  
  int func_case2(int he)
  {
      void line();
      line();
      int *valu_chan;
      valu_chan = &he;
      int b = he;
      b +=10;
      /*int mass[11] = {0,1,2,3,4,5,6,7,8,9,10};*/
      for(int i = he, a = he; i < b, a < b; i++, a++, (*valu_chan)++) 
      {
          cout << setw(15) << pow(*valu_chan,3) << setw(4) << a << endl;
      }
      line();            
  }

    int main()
    {
        int number_for_val, ba, back;
        int func_case1(int help),func_case2(int help);
        void line();
        string text(int a);
        line();
        text(2);
        cin >> number_for_val; 
        switch (number_for_val) 
        {
        default:
            line();
            text(2);
            cin >> back;
            line();
            func_case1(back);
            line();
            back = 0;
            break;
        case 1: 
            line();
            text(2);
            cin >> ba;
            func_case2(ba);
            
            break;
        }
    }
