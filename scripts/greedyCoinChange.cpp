// AMOUNT OF CHANGE RECURSIVE ALGORITHM
// Date: 17 - October - 2020
// Author: Alejandro Andrade Soriano

#include <iostream>
#include <climits>

using namespace std;

int greedyChange(int coinSet[], int arrLen, int toChange, int amountCoins)
{

  int temp = toChange - coinSet[arrLen - 1];

  if (toChange == 0)
  {
    cout << "Finish! No more change to give." << endl;
    cout << "Amount of coins to give: ";
    return amountCoins;
  }

  if (temp < 0)
  {
    arrLen--;
    cout << "Reducing value of coin to $" << coinSet[arrLen - 1] << endl;
    return greedyChange(coinSet, arrLen, toChange, amountCoins);
  }

  toChange = temp;
  cout << "Taking $" << coinSet[arrLen - 1] << " Rest Change $" << toChange << endl;
  return greedyChange(coinSet, arrLen, toChange, ++amountCoins);
}

int main()
{

  int coinSet[] = {1, 5, 10, 15, 20, 50};
  int n = sizeof(coinSet) / sizeof(coinSet[0]);
  int debt = 326;
  cout << "To change $" << debt << endl;
  cout << "Coin Change\n"
       << greedyChange(coinSet, n, debt, 0) << endl;

  return 0;
}
