#include <cstdio>
#include <iostream>
#include "Tasks_funcs.h"

int func1(int n, char* str) 
{
    std::cout << "Введите последовательность цифр через пробел" << '\n';
    std::cout << "Чётные числа данной последовательности:" << '\n';
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        if((int)str[i] > '/' && (int)str[i] < ':' && (int)str[i]%2 == 0)
        {
            std::cout << (char)str[i] << " ";
            ++count;
        }
    } //здесь можно этот цикл в отдельную функцию вынести и передать в неё динамический массив
    std::cout << '\n';
    delete[] str;
    return count;
}

int func2(int n, char* str, int maxx, int minn) {
  std::cout << "" << '\n';
  int max_s = 0, min_s = n, count = 0;
  // минимальная и максимальная длина слова
  for (int i = 0; i < n; i++) {
    if (str[i] == ' ' || str[i] == '\n') {
      if (count > max_s) {
        max_s = count;
      }
      if (count < min_s) {
        min_s = count;
      }
      count = 0;
    } else {
      count++;
    }
  }
  if(max_s == maxx && min_s == minn)
  {
    delete[] str;
    return 1;
  }
  else
  {
    return 0;
  }
}

int func3(int n, char* str, char* eq)
{
    std::cout << "Введите" << '\n';
    int k = 0;
    char* str1 = new char[n];
    for(int i = 0; i < n - 1; ++i)
    {
        if(str[i] != ' ')
        {
            str1[k] = str[i];
            ++k;
        }
    }
    str1[k] = '\0';
    if (str1 == eq)
    {
        delete[] str;
        delete[] str1;
        return 1;
    }
    else
    {
        return 0;
    }
}