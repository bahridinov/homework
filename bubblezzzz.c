#include <stdio.h>

int main()
{
  //ДОРОГАЯ Я, ПОЖАЛУЙСТА НЕ ЗАБУДЬ ПРОВЕРИТЬ РАБОТАЕТ ЛИ КОД НА 20+ ЭЛЕМЕНТАХ
  //n - фиксированное количество элементов, которые я ввожу в систему
  //a и b - выборочные числа из множества, которые позже будут использованы для сортировки
  //shift - новое вместилище для обмена чисел местами
  int arr[20], n, a, b, shift;

  printf("How many elements do you want to sort?\n");
  scanf("%d", &n);

  printf("Please, enter your %d integers\n", n);
  //Ввожу for для установки нового цикла для сравнения значений
  //Позже протестирую с while, если с for не получится
  for (a = 0; a < n; a++) 
    scanf("%d", &arr[a]);

  // for (a = 0 ; a <= n - 1; a++)
  for (a = 0 ; a < n - 1; a++)
  { //for (b = 0 ; b <= n - a - 1; b++)
    for (b = 0 ; b < n - a - 1; b++)
    {
      if (arr[b] > arr[b+1]) 
      { // shift вроде работает 
        shift = arr[b];
        arr[b] = arr[b+1];
        arr[b+1] = shift;
      }
    }
  }

  printf("Your sorted array:\n");

  for (a = 0; a < n; a++)
     printf("%d ", arr[a]);

}
