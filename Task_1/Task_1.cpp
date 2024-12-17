#include <iostream>

int countOnesInOddGroups(const char *binary_string)
{
    int count = 0;
    char current_char = '\0';
    int current_length = 0;

    for (int i = 0; binary_string[i] != '\0'; ++i)
    {
        char c = binary_string[i];
        if (c == current_char)
        {
            current_length++;
        }
        else
        {
            if (current_length % 2 == 1 && current_char == '1')
            {
                count += current_length;
            }
            current_char = c;
            current_length = 1;
        }
    }

    if (current_length % 2 == 1 && current_char == '1')
    {
        count += current_length;
    }

    return count;
}

int main()
{
    char binaryString[81];
    std::cout << "Введите строку из нулей и единиц (до 80 символов): ";

    int index = 0;
    char ch;
    while (index < 80 && (ch = getchar()) != '\n' && ch != EOF)
    {
        binaryString[index++] = ch;
    }
    binaryString[index] = '\0';

    int result = countOnesInOddGroups(binaryString);

    std::cout << "Исходный текст: " << binaryString << std::endl;
    std::cout << "Количество единиц в группах с нечетным количеством символов: " << result << std::endl;

    return 0;
}