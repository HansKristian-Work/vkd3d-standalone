#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2 && argc != 3)
    {
        fprintf(stderr, "Usage: dump-hex <DXBC path>\n");
        return 1;
    }

    bool use_32bit = false;
    if (argc == 3 && strtol(argv[2], NULL, 0) == 32)
        use_32bit = true;

    FILE *file = fopen(argv[1], "rb");
    if (!file)
    {
        fprintf(stderr, "Failed to open file: %s\n", argv[1]);
        return 1;
    }

    if (use_32bit)
    {
        unsigned count = 0;
        uint32_t value;
        while (fread(&value, sizeof(value), 1, file) == 1)
        {
            printf("0x%08x,%s", value, count != 7 ? " " : "");
            if (++count == 8)
            {
                count = 0;
                printf("\n");
            }
        }
    }
    else
    {
        unsigned count = 0;
        uint8_t value;
        while (fread(&value, 1, 1, file) == 1)
        {
            printf("0x%02x,%s", value, count != 31 ? " " : "");
            if (++count == 32)
            {
                count = 0;
                printf("\n");
            }
        }
    }
    printf("\n");
    fclose(file);
    return 0;
}