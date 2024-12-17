#include <iostream>
#include <cstring>
#include <cstdio>

int main()
{
    const int MAX_LENGTH = 80;
    char str[MAX_LENGTH];
    char podstr[MAX_LENGTH];
    int i = 0;
    char ch;
    int length = 0;
    char symbol;

    std::cout << "Введите строку (нажмите Enter для завершения ввода): ";

    while ((ch = std::getchar()) != '\n' && ch != EOF)
    {
        if (i < MAX_LENGTH - 1)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    std::cout << "Вы ввели: " << str << '\n';

    std::cout << "Введите подстроку (нажмите Enter для завершения ввода): ";

    while ((ch = std::getchar()) != '\n' && ch != EOF)
    {
        if (length < MAX_LENGTH - 1)
        {
            podstr[length++] = ch;
        }
    }
    podstr[length] = '\0';

    std::cout << "Вы ввели подстроку: " << podstr << '\n';

    std::cout << "Введите символ (нажмите Enter для завершения ввода): ";
    std::cin >> symbol;
    std::cout << "Вы ввели символ: " << symbol << '\n';

    char result[2 * MAX_LENGTH] = "";  // Массив для результата с запасом по размеру
    int j = 0;
    int k = 0;

    while (str[j] != '\0') {
        char word[MAX_LENGTH] = "";
        int l = 0;

        // Извлечение слова
        while (str[j] != ' ' && str[j] != '\0') {
            word[l++] = str[j++];
        }
        word[l] = '\0';

        // Копируем слово в результат
        strcat(result, word);

        // Проверка, оканчивается ли слово заданной подстрокой
        if (l >= length && strcmp(&word[l - length], podstr) == 0) {
            int len_result = strlen(result);
            result[len_result] = symbol;
            result[len_result + 1] = '\0';
        }

        // Добавление пробела, если нужно
        if (str[j] == ' ') {
            strcat(result, " ");
            j++;
        }
    }

    std::cout << "Измененный текст: " << result << '\n';

    return 0;
}
