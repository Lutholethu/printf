/**
 * _strlen - calculate the length of a string
 * @str: input string
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
    unsigned int length = 0;

    while (str[length] != '\0')
        length++;

    return length;
}
