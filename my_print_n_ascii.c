int print_char (char);

void my_print_n_ascii(int howMany)
{
    int nb =  32 ;
    if (howMany >= 95)
    {
        print_char(48);
    }
        else
    {
        while (nb <= howMany + 31)
        {
            print_char(nb);
            nb += 1;
        }
        
    };
    

    
    
};
