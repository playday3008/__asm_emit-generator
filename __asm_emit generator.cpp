// __asm_emit generator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <sstream>
using namespace std;

void hex_string(char str[], int length)
{
    //hexadecimal characters
    char hex_characters[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

    int i;
    for (i = 0; i < length; i++)
    {
        str[i] = hex_characters[rand() % 16];
    }
    str[length] = 0;
}
int main(int argc, char* argv[])
{
    cout << "   ____       _      _         __   __________  ___________ ____ " << endl;
    cout << "  / __ \\_____(_)____(_)____   / /  / ____/ __ \\/ ____/ ___// __ \\" << endl;
    cout << " / / / / ___/ / ___/ / ___/  / /  / / __/ / / / __/  \\__ \\/ /_/ /" << endl;
    cout << "/ /_/ (__  ) / /  / (__  )  / /  / /_/ / /_/ / /___ ___/ / ____/ " << endl;
    cout << "\\____/____/_/_/  /_/____/  / /   \\____/\\____/_____//____/_/      " << endl;
    cout << "    ____  __            __///                                    " << endl;
    cout << "   / __ \\/ /___ ___  __/ __ \\____ ___  __                        " << endl;
    cout << "  / /_/ / / __ `/ / / / / / / __ `/ / / /                        " << endl;
    cout << " / ____/ / /_/ / /_/ / /_/ / /_/ / /_/ /                         " << endl;
    cout << "/_/   /_/\\__,_/\\__, /_____/\\__,_/\\__, /                          " << endl;
    cout << "              /____/            /____/                           " << endl << endl;
    int n;
    int length = 2;
    char hex[30];
    int def = 0;
    if (argc == 1)
    {
        cout << "Enter number of random __asm _emit strings you want." << endl;
        cin >> n;
    }
    else if (argc == 2 || argc == 3)
    {
        stringstream convert(argv[1]);
        int myint;
        if (!(convert >> myint))
        {
            cout << "You do some shit." << endl;
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
            system("pause");
            return 0;
#else
            return 0;
#endif
        }
        n = myint;
    }
    else
    {
        cout << "You do some shit." << endl;
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
        system("pause");
        return 0;
#else
        return 0;
#endif
    }
    if (argc == 3)
    {
        stringstream convert(argv[2]);
        int myint;
        if (!(convert >> myint))
        {
            cout << "You do some shit." << endl;
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
            system("pause");
            return 0;
#else
            return 0;
#endif
        }
        def = myint;
    }
    srand((unsigned int)time(0));
    cout << "Please wait" << endl;
    ofstream myfile;
    if (def == 1)
        myfile.open("junk.h");
    else
        myfile.open("asmbytes.txt");
    if (myfile.is_open())
    {
        if (def == 1)
        {
            myfile << "#pragma once" << endl << endl;
            myfile << "// And you need:" << endl;
            myfile << "// 1. change all bytes(0x00, 0x01, 0x03....) in define \"JUNKS\" to random bytes" << endl;
            myfile << "// 2. change size this block by add new bytes" << endl;
            myfile << "#define JUNKS \\" << endl;
        }
        for (int i = 0; i < n; i++)
        {
            hex_string(hex, length);
            myfile << "__asm _emit 0x" << hex << " \\" << endl;
            //cout << "__asm _emit 0x" << hex << " \\" << endl;
        }
        myfile.close();
    }
    cout << "Success. Output in asmbytes.txt" << endl;
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    system("pause");
    return 0;
#else
    return 0;
#endif
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
