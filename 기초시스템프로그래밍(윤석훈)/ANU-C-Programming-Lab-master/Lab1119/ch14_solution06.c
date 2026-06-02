#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void sort_strings(char *s[], int size);

int main(void)
{
    char *arr[3] =
        {
            "mycopy",
            "src",
            "dst"};
    const int length = sizeof(arr) / sizeof(arr[0]);

    sort_strings(arr, length);

    for (int i = 0; i < length; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}

void sort_strings(char *s[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int least_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (strcmp(s[j], s[least_index]) < 0)
            {
                least_index = j;
            }
        }

        char *temp = s[i];
        s[i] = s[least_index];
        s[least_index] = temp;
    }
}