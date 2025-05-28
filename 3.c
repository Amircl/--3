#include <stdio.h>

int main() {
    // 1. Создаем массив из 3 чисел
    int numbers[3] = {1, 2, 3};
    
    // 2. Выводим массив
    printf("Массив чисел:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: %d\n", i, numbers[i]);
    }
    
    // 3. Пример изменения элемента
    numbers[1] = 5; // Меняем второй элемент (индекс 1) с 2 на 5
    
    // 4. Выводим измененный массив
    printf("\nПосле изменения:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: %d\n", i, numbers[i]);
    }
    
    return 0;
}
