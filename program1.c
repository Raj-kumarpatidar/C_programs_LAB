//write a program to hash table after inserting elements 17,16,22,36,33,46,26,144 into a hash table of size 10 using linear probing were h(x)=x mod 10

#include <stdio.h>

#define SIZE 10

int hash(int key)
{
    return key % SIZE;
}

void insert(int table[], int key)
{
    int index = hash(key);
    int i = 0;

    while (table[(index + i) % SIZE] != -1) {
        i++;
    }

    table[(index + i) % SIZE] = key;
}

void display(int table[])
{
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");
}

int main()
{
    int table[SIZE];

    // initialize table to -1
    for (int i = 0; i < SIZE; i++) {
        table[i] = -1;
    }

    // insert elements
    insert(table, 17);
    insert(table, 16);
    insert(table, 22);
    insert(table, 36);
    insert(table, 33);
    insert(table, 46);
    insert(table, 26);
    insert(table, 144);

    // display hash table
    display(table);

    return 0;
}
