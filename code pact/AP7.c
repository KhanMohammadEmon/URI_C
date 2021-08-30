#include <stdio.h>
int main()
{
    char line[150];
    int vowels, consonant,size,i;

    vowels = consonant= 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter a line of string: ");
    for(i=0; i<size; i++)
    {
        scanf("%c", &line[i]);
    }


    for (int i = 0; line[i] != '\0'; ++i)
    {

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
                line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
                line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
                line[i] == 'U')
        {
            vowels++;
        }
        consonant=size-vowels;

//       else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
//        {
//            consonant++;
//
//        }

    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    return 0;
}
