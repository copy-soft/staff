#include <fstream>
#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    int i=0;
    string buff, buff1; // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("мусор"), fin1("мусор"); // открыли файл для чтения
    while(!fin1.eof()){
    while(!fin.eof()){
    fin >> buff; // считали первое слово из файла
    fin1 >> buff1;
    if(buff=="поиск")i++;///cout << buff << endl; // напечатали это слово
    }}
    //fin.getline(buff, 50); // считали строку из файла
    fin.close(); // закрываем файл
    cout << i << endl; // напечатали эту строку
 
    return 0;
}
