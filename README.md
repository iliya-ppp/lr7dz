# Домашнее задание к работе 7

## Условие задачи

Напишите программу, которая интерпретирует степени 2 в соответствующие международные приставки (10 – K, 20 – M, G, T, P, E).

## 1. Алгоритм и блок-схема

### Алгоритм

1. **Начало**
2. Инициализировать целочисленную переменную для хранения степени:
    - `degree = 0` 
3. Запрос числа.
4. Передать значение переменной `degree` в управляющую структуру множественного выбора `switch`.
5. Сравнить значение с ключевыми кейсами:
    - Если `10` - Вывести латинскую букву "K" 
    - Если `20` - Вывести латинскую букву "M" 
    - Если `30` - Вывести латинскую букву "G" 
    - Если `40` - Вывести латинскую букву "T" 
    - Если `50` - Вывести латинскую букву "P" 
    - Если `60` - Вывести латинскую букву "E" 
6. Если совпадений не найдено, перейти к ветке `default`:
    - Вывести диагностическое сообщение "Неизвестная степень".
7. Завершить работу структуры `switch` с помощью операторов `break`.
8. **Конец**

### Блок-схема

<img width="1185" height="903" alt="image" src="https://github.com/user-attachments/assets/014e9f99-6873-4436-9629-b6f18c0a4eaf" />

https://app.diagrams.net/#G1905POCtXaK0Hz0gb5BfBoFrCZk0GPKgA#%7B%22pageId%22%3A%22tQaG9tD7nEnr8zy2EhSa%22%7D

## 2. Реализация программы

```c
#define _CRT_SECURE_NO_DEPRECATE
#include<locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL,"RUS");
    int degree = 0; 
    printf("Введите степень: ");
    scanf("%d", &degree);

    switch (degree) 
    {
        case 10:
            printf("K\n");
            break;
        case 20:
            printf("M\n"); 
            break;
        case 30:
            printf("G\n");
            break;
        case 40:
            printf("T\n");
            break;
        case 50:
            printf("P\n");
            break;
        case 60:
            printf("E\n");
            break;
        default:
            printf("Неизвестная степень\n");
            break;
    }

    return 0;
}
```

## 3. Результаты работы программы
<img width="244" height="48" alt="image" src="https://github.com/user-attachments/assets/8f44caa9-c477-4258-82ea-ca08d587695b" />
<img width="239" height="47" alt="image" src="https://github.com/user-attachments/assets/21e68659-cf9b-4f22-b301-ca140662b932" />
<img width="248" height="53" alt="image" src="https://github.com/user-attachments/assets/57ec585f-460d-43af-b5a1-80a18771fa80" />
<img width="244" height="51" alt="image" src="https://github.com/user-attachments/assets/6972ef1d-b8ae-41e7-9b80-7b614e7f8e95" />
<img width="240" height="51" alt="image" src="https://github.com/user-attachments/assets/8370c951-f11f-4391-bd08-cb557f11da5d" />
<img width="250" height="53" alt="image" src="https://github.com/user-attachments/assets/85a5246c-96fb-4241-aa92-09b92951bea4" />
<img width="249" height="59" alt="image" src="https://github.com/user-attachments/assets/f1dfb520-e1db-4809-b50c-66337852f91a" />




## 4. Информация о разработчике
Мамонов Илья бИЦТ-261
