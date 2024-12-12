#include <cstdio>
#include <iostream>

bool is_on = 1;

int InputChar(char* str) {
    std::cout << "Введите строку" << '\n';
    char c;
    int n = 0, inp_err = 0;
    do
    {
        c = getchar();
        if(c == '\n' && inp_err == 0)
        {
            ++inp_err;
            c = getchar();
        }
        str[n] = c;
        ++n;
    } while(c != '\n');

    /*for(int i = 0; i < n; ++i)
    {
        std::cout << str[i];
    }
    std::cout << '\n';*/
    return n;
}

long long checkInputN() {
    while (1)
    {
        long long a;
        std::cin >> a;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Недопустимое значение" << '\n';
        }
        else {
            return a;
        }
    }  
}

void func1() 
{
    std::cout << "Введите последовательность цифр через пробел" << '\n';
    char* str = new char[80];
    int n = InputChar(str);
    std::cout << "Чётные числа данной последовательности:" << '\n';
    for(int i = 0; i < n; ++i)
    {
        if((int)str[i] > '/' && (int)str[i] < ':' && (int)str[i]%2 == 0)
        {
            std::cout << (char)str[i] << " ";
        }
    } //здесь можно этот цикл в отдельную функцию вынести и передать в неё динамический массив
    std::cout << '\n';
    delete[] str;
}

void func2() {
  char *str = new char[80];
  std::cout << "" << '\n';
  int n = InputChar(str);
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

  for (int i = 0; i < n; i++) {
    if (str[i] == ' ' || str[i] == '\n') {
      if (count == max_s || count == min_s) {
        for (int j = i - count; j < i; j++) {
          std::cout << str[j];
        }
        std::cout << "\n";
      }
      count = 0;
    } else {
      count++;
    }
  }
  delete[] str;
}

void func3()
{
    std::cout << "Введите" << '\n';
    char* str = new char[80];
    int n = InputChar(str);
    int k = 0;
    char* str1 = new char[n];
    /*for (int i = 0; i < n; ++i)
    {
        if(str[i] != ' ')
        {
            str1[i] = str[i];
            ++k;
        }
    }
    n = k;*/
    for(int i = 0; i < n - 1; ++i)
    {
        if(str[i] != ' ')
        {
            str1[k] = str[i];
            ++k;
        }
    }
    str1[k] = '\0';

    for (int i = 0; i < k; ++i)
    {
        std::cout << str1[i];
    }
    std::cout << '\n';
    
    for (int i = 0, j = k-1; i != (k-1)/2;)
    {
        if(str1[i] != str1[j])
        {
            std::cout << "NOT " << '\n';
            break;
        }
        ++i;
        --j;
    }
    delete[] str;
}

void chooseFunc() 
{
    int a;
    std::cout << "Выполнил Мурашко Андрей Николаевич, студент 453501 группы" << '\n';
    std::cout << "Введите число от 1 до 3, чтобы выбрать номер задания:" << '\n';
    a = checkInputN();
    switch (a){
        case(1):
        std::cout << "task 1" << '\n';
        func1();
        break;
        case(2):
        std::cout << "task 2" << '\n';
        func2();
        break;
        default:
        std::cout << "task 3" << '\n';
        func3();
        break;
    } 
}

void getInput()
{
    char enter_value;
    std::cout << "Введите n, чтобы выполнить программу заново, " << '\n';
    std::cout << "Введите q, чтобы выйти из программы: " << '\n';
    while (1) {
        enter_value = getchar();
        if (enter_value == 'n') { 
            chooseFunc();
            break;
        }
        if (enter_value == 'q') {    
            is_on = 0;
            break;
        }
        else {
            std::cout << "Недопустимое значение для ввода. Попробуйте ещё раз." << '\n';
        }
    } 
}

int main() {
    std::cout << "Выполнил Мурашко Андрей Николаевич, студент 453501 группы" << '\n';
    while (1) { 
        getInput();
        if (is_on == 0) {
            break;
        }
    }
    std::cout << "Выполняется выход из программы." << '\n';
    return 0;
    return 0;
}