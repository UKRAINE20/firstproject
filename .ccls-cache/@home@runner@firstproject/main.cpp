
#include <iostream>


using namespace std;

int main() {


  const int SIZE = 5;
  int array[SIZE];

  for (int i = 0; i < SIZE; i++) {
    cout << "Введіть " << i + 1 << " елемент масиву\n";
    cin >> array[i];
  }
  cout << "Вміст масиву:\n";
  for (int i = 0; i < SIZE; i++) {
      cout << array[i] << " ";
  }
  cout << endl;
  return 0;
}
