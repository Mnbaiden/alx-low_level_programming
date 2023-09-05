#include "main.h"

/**
 * create_file - creates a file and writes a string to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, bytes_written = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[bytes_written])
            bytes_written++;
        if (write(fd, text_content, bytes_written) == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
