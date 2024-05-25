int print_char (char);
int mystrlen (char* toRevert);

void my_print_revert(char* toRevert)
{
    int len = mystrlen (toRevert);
    while (len != -1)
    {
        print_char (toRevert[len]);
        len -= 1;
    }
    
}