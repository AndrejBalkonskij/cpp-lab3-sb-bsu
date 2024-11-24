#include<iostream> 
using namespace std; 

int main()
{
  int k, i = 1, sum_k = 0, number;
  cout << " Enter the amount of integers to sum = "; cin >> k;
  if (k == 0)
  {
    cout << "amount of numbers = 0"; //Если наша переменная k будет равна нулю, то выскочит надпись "amount of numbers = 0"
    return 0;
  }
  else // в противном случае 
  {
    do 
    {
      cout << "Enter integer nr. " << i << ": "; 
      cin >> number;
      sum_k += number; i++;
    } while (i <= k);
    cout << " The total sum of " << k << " integers is: "  << sum_k;
    return 0;
  }
}
