
#include <iostream>
using namespace std;
int main() {
  /*Print like
  123
  456
  789
  */
  /*
  int i = 1, j = 1, n, count = 1;
  cout << "Enter the number you would like to print pattern for ";
  cin >> n;
  while (i <= n)
  {
    j = 1;
    while (j <= n)
    {

      cout << count;
      count++;
      j++;
    }
    cout << endl;
    i++;
  }
  */


  /*Print like
*
**
***
*/
/*
int i = 1, j = 1, n;
string star = "*";
cout << "Enter how many rows you want?";
cin >> n;
while (i <= n)
{
  j = 1;
  while (j <= i)
  {
    cout << star;
    j++;
  }
  cout << endl;
  j++;
  i++;

}
*/

/*count like
1
23
456
78910*/
/*
int row=1, col=1, n, count = 1;
cout << "How many rows would you like to print?";
cin >> n;
while (row <= n)
{
  col = 1;
  while (col <= row)
  {
    cout << count;
    col++;
    count++;
  }
  cout << endl;
  row++;

}
*/

/*
Print pattern like
1
23
345
4567
*/
/*
int row = 1, col = 1, n, value;
cin >> n;

while (row < n)
{
  col = 1;
  value = row;
  while (col <= row)
  {
    cout << value;
    value++;
    col++;
  }
  cout << endl;
  row++;

}
*/

int row = 1, n;
cin >> n;
while (row <= n)
{

  int col = 1;
  while (col <= n)
  {
    char ch = 'A' + row - 1;
    cout << ch;
    col++;
  }
  cout << endl;
  row++;

}
}

