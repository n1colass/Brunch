#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char  strv[]= "1234567890", str[80];
//	cout << "Введіть рядок не більше 80 символів (але більше 2-х слів)\n";
//	gets_s(str);
//
//
//	char *p = strtok(str, " ,.");
//	if () 
//	{
//		while (p != NULL)                         // пока есть лексемы
//		{
//			cout << p << "  ";
//			p = strtok(NULL, " ,.-");
//		}
//	}
//	
//
//	system("pause");
//	return 0;
//}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    char  strv[] = "1234567890", str[80];
    cout << "Введіть рядок не більше 80 символів (але більше 2-х слів)\n";
    gets_s(str);

    int i = 0;
    while (str[i] != '\0')
    {
        int word = 0, num = 0;
        string truestr = "";
        while (str[i] != ' ' && str[i] != '\0')
        {
            truestr += str[i];
            if ((int)str[i] > 47 && (int)str[i] < 58)
                num++;
            else if ((int)str[i] > 96 && (int)str[i] < 123)
                word++;

            i++;
        }

        if (word > 0 && num > 0)
            cout << truestr << " ";
        if (str[i] == '\0')
            break;
        i++;
    }

    system("pause");
    return 0;
}

