/*
Напишите программу вычисляющую среднее арифметическое
последовательности чисел. Длина последовательности неизвестна, однако
последовательность оканчивается нулем и других нулевых значений не
встречается. В программе запрещается использовать дополнительную
память(aka массивы, списки…)
*/
#include <iostream>
#include <numeric>

using namespace std;

int main()
   {
    unsigned int x, sum = 0, length = 0;
    float Y;
    do 
    {
      cin >> x;
      sum += x;
      length++;
    } 
    while (x != 0);
    Y = (float)sum/(float)length;
    cout << Y;
    return 0;
   }
