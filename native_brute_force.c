//naive brute force approach to string matching prolem

#include <stdio.h> 
#include <string.h> 
  
void nb_force(char* pattern, char* text) 
{ 
    int a = strlen(text); // to loop through the text
    int b = strlen(pattern); // to loop through the pattern
  
    
    for (int i = 0; i <= a - b; i++) { 
        int j; 
  
        
        for (j = 0; j < b; j++) 
            if (text[i + j] != pattern[j]) 
                break; 
                //mismatch found, break the inner loop with j
        if (j == b)  
            printf("The match has been found at %d\n", i); 
    } 
} 
  
int main() 
{ 
    char text[] = "SDU is the best university"; 
    char pattern[] = "best"; 
    nb_force(pattern, text); 
    return 0; 
} 

