#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int size)
{
  if (size == 0)
    return 0;
  if (size == 1)
    return arr[0];
  return arr[0] + getSum(arr + 1, size - 1);
}

int main()
{
  int arr[5] = {2, 4, 9, 9, 9};
  int sum = getSum(arr, 5);
  cout << "Sum of array is: " << sum << endl;
  return 0;
}