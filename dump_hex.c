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

    for (;;)
    {
        union
        {
            uint32_t u32;
            uint8_t u8[4];
        } u;
        u.u32 = 0;

        unsigned i;
        for (i = 0; i < 4; i++)
        {
            if (fread(&u.u8[i], 1, 1, file) != 1)
                break;

        }

        if (i > 0)
        {
            printf("0x%08x,%s", u.u32, count != 7 ? " " : "");
            if (++count == 8)
            {
                count = 0;
                printf("\n");
            }
        }

        if (i < 4)
            break;
    }

    fclose(file);
    return 0;
}