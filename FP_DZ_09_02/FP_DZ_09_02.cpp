#include <Windows.h>
#include <iostream>
#include<time.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

     SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ЗАДАНИЕ 1.
    /*
      cout << endl << " СПРАВОЧНИК " << endl;

    string arrayMob[10]{"+11111111","+23232323","+45334434","+54454333","+43345543","+54334454","+54433443","+54433443","+34345334","+44334343"};
    string arrayHaus[10]{"2-32-33","4-44-54","6-53-54","6-45-54","6-45-54","6-46-66","4-54-33","6-55-54","6-43-34","6-44-34"};
    string arrayData[10]{"Андрей", "Антон", "Вадим", "Олег", "Егор", "Артем", "Василий", "Наталья", "Игорь", "Анна"};
    char sorting;

    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << " ";
        cout << arrayMob[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << "  ";
        cout << arrayHaus[i] << endl;
    }
    cout << endl;

    cout << " Отсортировать по мобильным номерам - нажмите 1" << endl;
    cout << " Отсортировать по домашним номерам - нажмите 2" << endl;
    cout << " Вывести пользовательские данные - нажмите 3" << endl;
    cout << " Закрыть справочник - нажмите 0 ";

    do {
        cin >> sorting;
        cout << endl;

        if (sorting != '1' && sorting != '2' && sorting != '3' && sorting != '0') {
            cout << " Введены неверные значения. Попробуйте снова ";
        }
        if (sorting == '1') {
            cout << " МОБИЛЬНЫЕ НОМЕРА:\n" << endl;
            for (int i = 0; i < 10; i++) {
                cout << " ";
                cout << arrayMob[i] << endl;
            }
            cout << endl;
            
        }
        if (sorting == '2') {
            cout << " ДОМАШНИЕ НОМЕРА:\n";
            cout << endl;
            for (int i = 0; i < 10; i++) {
                cout << "  ";
                cout << arrayHaus[i] << endl;
            }
            cout << endl;

        }
        if (sorting == '3') {
            cout << " ПОЛЬЗОВАТЕЛЬСКИЕ ДАННЫЕ\n";
            cout << endl;
            for (int i = 0; i < 10; i++) {
                cout << "  ";
                cout << arrayHaus[i] << " - ";
                cout << arrayData[i] << endl;
            }
            cout << endl;
            for (int i = 0; i < 10; i++) {
                cout << "  ";
                cout << arrayMob[i] << " - ";
                cout << arrayData[i] << endl;
            }
            cout << endl;

        }
        if (sorting == '0') {
            cout << " ВЫХОД ИЗ ПРИЛОЖЕНИЯ\n";
            return 0;
        }
       

    } while (true);
    {

    }

    */

    // ЗАДАНИЕ 3.
    /*
   

    const size_t size = 10;
    int puncakeArray[size] = { 10,5,7,4,6,1,3,9,2,8 };
    int buff;
    int max;
    int maxArrayElement;

    cout << endl <<  " Не отсортированный массив: \n" << endl ;
   
    for (int i = 0; i < size; i++) {
     
        cout << " " <<  "Array[" << i << "] = " << puncakeArray[i] << endl;
    }

    for (int i = size - 1; i >= 0; i--) {

        max = puncakeArray[i];
        maxArrayElement = i;
       
        for (int j = i; j >= 0; j--)
        {
            if (puncakeArray[j] > max)
            {
                max = puncakeArray[j];
                maxArrayElement = j;
            }
        }
        
        for (int i = 0; i <= maxArrayElement / 2; i++) {
           
            if (maxArrayElement == 0)
            {
                break;
            }

            buff = puncakeArray[i];
            puncakeArray[i] = puncakeArray[maxArrayElement - i];
            puncakeArray[maxArrayElement - i] = buff;
        }
      
        for (int j = 0; j <= i / 2; j++)
        {
            buff = puncakeArray[j];
            puncakeArray[j] = puncakeArray[i - j];
            puncakeArray[i - j] = buff;
        }
    }

    cout << endl << " Отсортированный массив: \n" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << " " << "Array[" << i << "] = " << puncakeArray[i] << endl;
    } */

    // ЗАДАНИЕ 2.
    /*
    
   

    const size_t massiv = 5;
    int array[massiv];
    string number[5]{ " первое", " второе", " третье", " четвертое", " пятое" };
    int num;
    int temp;
    int count = 0;
    cout << " Заполните массив: ";

    cout << endl;
    for (int i = 0; i < massiv; i++) {
        cout << " Введите" << number[i] << " число: ";
        cin >> num;
        array[i] = num;
       
    }
    cout << endl;

    for (int i = 1; i < massiv; ++i) {
        for (int j = 0; j < massiv - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                count++;
            }
        }
        if (count == 0) {
            cout << " " << endl;
            cout << i << endl;
            break;

        }
    }
    for (int i = 0; i < massiv; i++) {
        cout << array[i] << " ";
    } */





  
  

   
}

