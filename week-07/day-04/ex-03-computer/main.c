#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

typedef struct computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} computer_t;

typedef struct notebook{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} notebook_t;

int main() {
    computer_t computer;
    computer.cpu_speed_GHz = 3.2;
    computer.ram_size_GB = 8;
    computer.bits = 64;

    notebook_t notebook;
    notebook.cpu_speed_GHz = 2.5;
    notebook.ram_size_GB = 8;
    notebook.bits = 64;

    printf("The computer has this parameters: %.2fGHz processor, %dGB ram and %d bit operating system.\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);
    printf("The notebook has this parameters: %.2fGHz processor, %dGB ram and %d bit operating system.\n", notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);

    return 0;
}