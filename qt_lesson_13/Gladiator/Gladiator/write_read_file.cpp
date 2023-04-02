#include "write_read_file.h"

int write_file(char *_name_file, int _data)
{
    FILE *f = fopen(_name_file, "a");
    if (f == NULL)
    {
        printf("Error: can't open file\n");
        return -1;
    }
    fprintf(f, "%d\n", _data);
    fclose(f);
}
