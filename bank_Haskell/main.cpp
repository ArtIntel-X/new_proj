// This program implements the bank system : All english
// By made Dmitriy Yershov

#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

  class cBank_Haskell
  {
  public:
      string greeting = "Добро пожаловать в банк Heskell!";
     
  private:
      long double *cash_money;
      
  };
  
  class cCredit_Haskell : cBank_Haskell
  {
  public:
      char name_people[80]; // name
      char target_people[80]; // цель
      long double loan_amount; // сумма кредита
      int time_yers; // срок
      double choice_of_loan(string *value);
      long double func_credit();
  };
  
  double choice_of_loan(string *value)
  {
      if( (value[0] == "15%") || (value[0]) == "15" )
      {
          double loan = 0.15;
          return loan;
      }
      else if( (value[0] == "8%") || (value[0] == "8") )
      {
          double loan = 0.08;
          return loan;
      }
      else 
          cout << "Под такой процент мы не даем кредит!" << endl;
  }
  
  double func_credit(double tLoan, double sum, double term)
  {
      double *pay, *tax, *all_sum, tax_h, pay_h, all_sum_h;
      tax = &tax_h;
      all_sum = &all_sum_h;
      pay = &pay_h;
      tax_h = sum * tLoan; // налог
      all_sum_h = sum + tax_h; // вся сумма долга
      pay_h = all_sum_h/term;
      cout << "Ваша плата по погошению кредита равна " << *pay << " в год!" << endl 
           << "Ваш налог на " << sum << " составляет " << *tax << endl 
           << "Вы должны будете выплатить " << *all_sum << endl;    
  }
  
  long double func_depozit()
  {
      
  }
  
  short choice_of_actions(short *value)
  {
      switch (*value) // Для выбора действий (1) депозит\ (2) кредит \ (3) *устроиться на работу в банк, и придумаем еще)
      {
      default:
          break;
      case 1:          
          break;
      case 2:
          break;
      case 3:
          break;
      }
  }
  
  int main()
  {
      
  }
