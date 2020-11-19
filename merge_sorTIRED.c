#include <stdio.h> 

void merge(int A[], int p, int q, int r) 
{  //Добавление переменных для удобства
    int i, j, k; 
   //Нахождение значений элементов множества, чтобы разделить ее надвое
    int n1 = q - p + 1; 
    int n2 = r - q; 
   //Множество В получает элементы от p до q
   //Множество С получает элементы от q+1 до r
    int B[n1], C[n2];  
   //Распределение условий для двух множеств
    for (i = 0; i < n1; i++) 
        B[i] = A[p + i]; 
    for (j = 0; j < n2; j++) 
        C[j] = A[q + 1 + j]; 
    i = 0;
    j = 0;
    k = p; 
    //Добавление условий if-else для выборочной сортировки
    while (i < n1 && j < n2) { 
        if (B[i] <= C[j]) { 
            A[k] = B[i]; 
            i++; 
        } 
        else { 
            A[k] = C[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        A[k] = B[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        A[k] = C[j]; 
        j++; 
        k++; 
    } 
} 
  
//Дополнительные параметры значений множеств
void mergeSort(int A[], int p, int r) 
{ 
    if (p < r) { 
        
        int q = p + (r - p) / 2;
        mergeSort(A, p, q); 
        mergeSort(A, q + 1, r);
        merge(A, p, q, r); 
    } 
} 
  
//Образ множества и его характеристики
void printArray(int A[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int A[] = { 5, 9, 18, 13, 7, 10, 26, 32, 4, 88 };    
    int arr_size = sizeof(A) / sizeof(A[0]); 
  
    printf("Given unsorted: \n"); 
    printArray(A, arr_size); 
  
    mergeSort(A, 0, arr_size - 1); 
  
    printf("\nYour sorted array: \n"); 
    printArray(A, arr_size); 
    return 0; 
} 
