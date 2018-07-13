// This programm will work with addition, subtraction, division,multiplication and for the remainder.
// Developer Dmitriy Yershov
// The task 1.20

#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;
  
  int main()
  {
      short int nub;
      const unsigned int numberran = 40;
      cout << "Выберите действия : " << endl << "1)Сложение" << endl 
           << "2)Вычитание " << endl << "3)Умножение " << endl 
           << "4)Деление " << endl << "5)Деление с остатком" << endl;
      cin >> nub;
      srand(numberran);
         switch (nub)
         {
//======================================================================================================================================         
         case 1: cout << "Вы находитесь в СЛОЖЕНИИ" << endl; 
             short int ifnumb_then_out,help;  
             double variable_fir,variable_sec,variable_out,check;
             do
             {                
                 cout << "Введите число, которое хотите изменять : " << endl << "Ваше число : ";
                 cin >> variable_fir;
                 variable_sec = rand() % 40 + 2;  // Для хранения информации и вывода;
                 variable_out = variable_fir + variable_sec;
                 cout << "Ваше число было увеличено на " << variable_sec << "! Сколько в итоге получится? " << endl 
                      << "Ваш ответ::";
                 cin >> check;
                  if(check != variable_out)
                  {
                      cout << "Ваш ответ неверный!" << endl<< "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl << "Ваш выбор : ";
                      cin >> help;
                      if(0 <= help && 1 >= help)
                          ifnumb_then_out = help;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  } 
                  else
                  {   
                      cout << "Ваш ответ верный!" << endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl << "Ваш выбор : ";
                      cin >> help;
                      if(0 <= help && 1 >= help)
                          ifnumb_then_out = help;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  }
             } 
             while(ifnumb_then_out != 1);
             break;
//-------------------------------------------------------------------------------------------------------------------------------------         
         case 2: cout << "Вы находитесь в ВЫЧИТАНИИ " << endl;
             short int _then_out,h;  
             double variafir,variasec,variaout,checkthen;
             do
             { 
                 cout << "Введите число, которое хотите изменять : " << endl << "Ваше число : ";
                 cin >> variafir;
                 variasec = rand() % 40 + 1;  // Для хранения информации рандома;
                 variaout = variafir - variasec;
                 cout << "Ваше число было уменьшено на " << variasec << "! Сколько в итоге получится? " << endl 
                      << "Ваш ответ::";
                 cin >> checkthen;
                  if(checkthen != variaout)
                  {
                      cout << "Ваш ответ неверный!" << endl<< "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl << "Ваш выбор : ";
                      cin >> h;
                      if(0 <= h && 1 >= h)
                          _then_out = h;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  } 
                  else
                  {   
                      cout << "Ваш ответ верный!"<< endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl << "Ваш выбор : ";
                      cin >> h;
                      if(0 <= h && 1 >= h)
                          _then_out = h;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  }
             } 
             while(_then_out != 1);   
             break;
//==================================================================================================================================        
         case 3: cout << "Вы находитесь в УМНОЖЕНИИ" << endl;
             short int thenout,he;  
             double variaf,varias,variao,che;
             do
             { 
                 cout << "Введите число, которое хотите изменять : " << endl << "Ваше число : ";
                 cin >> variaf;
                 varias = rand() % 50 + 1 ;  // Для хранения информации и вывода;
                 variao = variaf * varias;
                 cout << "Ваше число было увеличено в " << varias << " раз! Сколько в итоге получится? " << endl 
                      << "Ваш ответ::";
                 cin >> che;
                  if(che != variao)
                  {
                      cout << "Ваш ответ неверный!" << endl<< "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl 
                           << "Ваш выбор : ";
                      cin >> he;
                      if(0 <= he && 1 >= he)
                          thenout = he;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }  
                  } 
                  else
                  {   
                      cout << "Ваш ответ верный!" << endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl 
                           << "Ваш выбор : ";
                      cin >> he;
                      if(0 <= he && 1 >= he)
                          thenout = he;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  }
             } 
             while(thenout != 1);  
             break;
//=================================================================================================================================             
         case 4: cout << "Вы находитесь в ДЕЛЕНИИ" << endl;
             short int value_out,back;  
             double varf,vars,varo,cler;
             do
             { 
                 cout << "Введите число, которое хотите изменять : " << endl << "Ваше число : ";
                 cin >> varf;
                 vars = rand() % 25 + 1 ;  // Для хранения информации и вывода;
                 varo = varf / vars;
                 cout << "Ваше число было уменьшено в " << vars << " раз! Сколько в итоге получится? " << endl 
                      << "Ваш ответ::";
                 cin >> cler;
                  if(cler != varo)
                  {
                      cout << "Ваш ответ неверный!" << endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl 
                           << "Ваш выбор : ";
                      cin >> back;
                      if(0 <= back && 1 >= back)
                          value_out = back;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  } 
                  else
                  {   
                      cout << "Ваш ответ верный!" << endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl 
                           << "Ваш выбор : ";
                      cin >> back;
                      if(0 <= back && 1 >= back)
                          value_out = back;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  }
             } 
             while(value_out != 1); 
             break;
//=================================================================================================================================             
         case 5: cout << "Вы находитесь в ДЕЛЕНИИ С ОСТАТКОМ" << endl;
             short int vout,cack;  
             int varfir,varsec,varout;
             double cl;
             do
             { 
                 cout << "Введите число, которое хотите изменять : " << endl << "Ваше число : ";
                 cin >> varfir;
                 varsec = rand() % 15 + 1 ;  // Для хранения информации и вывода;
                 varout = varfir % varsec;
                 cout << "Ваше число было уменьшено в " << varsec << " раз! Сколько получится остаток от деления? " << endl 
                      << "Ваш ответ::";
                 cin >> cl;
                  if(cl != varout)
                  {
                      cout << "Ваш ответ неверный!" << endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl 
                           << "Ваш выбор : ";
                      cin >> cack;
                      if(0 <= cack && 1 >= cack)
                          vout = cack;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  } 
                  else
                  {   
                      cout << "Ваш ответ верный!" << endl << "Вы хотите выйти? Если ДА->1, если НЕТ->0 " << endl 
                           << "Ваш выбор : ";
                      cin >> cack;
                      if(0 <= cack && 1 >= cack)
                          vout = cack;
                      else 
                      {
                          cout << "Введенное число не то! Ошибка::404" << endl;
                          continue;
                      }
                  }
             } 
             while(vout != 1);              
             break;
//=================================================================================================================================             
         default: cout << "Вам необходимо выбрать действие!" << endl;
                  
             break;
         }
      
  }
