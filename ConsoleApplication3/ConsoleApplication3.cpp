// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

bool validIndexArray(int n, int size) {
    return n < size&& n >= 0 ? true : false;
}

char* subString(char* str, int size, int n, int m) {
    if (!validIndexArray(n, size)) {
        return nullptr;
    }
    if(!validIndexArray(m, size)) {
        return nullptr;
    }
    if (n > m) {
        swap(n, m);
    }
    char* res = new char[m - n + 2];
    //char* res = new char[17];
    int index = 0;
    for (int i = n; i <= m; i++) {
        res[index++] = str[i];
    }
    res[index] = '\0';
    return res;
}


int main()
{
    const int sizeBuf = 256;
    char buf[sizeBuf];
    char* str = buf;
    cin.getline(str,256);
    cout << str <<"lenght "<< strlen(str)<<endl;
    char* substr = subString(str, sizeBuf, 2, 4);
    cout << "";
    cout << substr << " lenght " << strlen(substr) << endl;;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
