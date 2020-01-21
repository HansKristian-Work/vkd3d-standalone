#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: dump-hex <DXBC path>\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "rb");
    if (!file)
    {
        fprintf(stderr, "Failed to open file: %s\n", argv[1]);
        return 1;
    }

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

    fclose(file);
    return 0;
}