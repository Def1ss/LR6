#include <iostream>
#include <cstring>

// Функция для вычисления длины строки
int length(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

// Функция для обрезки строки до заданной длины
void trim(char* str, int new_len) {
    if (new_len < length(str)) {
        str[new_len] = '\0';
    }
}

// Функция для добавления пробелов до заданной длины
void pad(char* str, int new_len) {
    int current_len = length(str);
    if (current_len < new_len) {
        for (int i = current_len; i < new_len; ++i) {
            str[i] = ' ';
        }
        str[new_len] = '\0';
    }
}

// Функция для вычисления средней длины строк
int average_length(char** strings, int size) {
    int total_length = 0;
    for (int i = 0; i < size; ++i) {
        total_length += length(strings[i]);
    }
    return total_length / size;
}

// Функция для обработки строк
void process_strings(char** strings, int size) {
    int avg_len = average_length(strings, size);
    for (int i = 0; i < size; ++i) {
        int len = length(strings[i]);
        if (len > avg_len) {
            trim(strings[i], avg_len);
        } else if (len < avg_len) {
            pad(strings[i], avg_len);
        }
    }
}

// Функция для вывода строк на экран
void print_strings(char** strings, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << '"' << strings[i] << '"' << std::endl;
    }
}

int main() {
    int capacity = 2;
    int size = 0;
    char** strings = new char*[capacity];

    std::cout << "Введите строки (для завершения ввода введите пустую строку):" << std::endl;
    while (true) {
        char buffer[81] = {0}; // Предельная длина строки 80 символов + 1 для '\0'
        int j = 0;
        char c;

        while (j < 80 && (c = getchar()) != '\n' && c != EOF) {
            buffer[j++] = c;
        }
        buffer[j] = '\0';

        if (length(buffer) == 0) {
            break; // Прекращение ввода при пустой строке
        }

        if (size == capacity) {
            capacity *= 2;
            char** new_strings = new char*[capacity];
            for (int i = 0; i < size; ++i) {
                new_strings[i] = strings[i];
            }
            delete[] strings;
            strings = new_strings;
        }

        strings[size] = new char[81];
        std::strcpy(strings[size], buffer);
        ++size;
    }

    process_strings(strings, size);
    print_strings(strings, size);

    for (int i = 0; i < size; ++i) {
        delete[] strings[i];
    }
    delete[] strings;

    return 0;
}
