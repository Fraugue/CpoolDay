int print_char(char);
int Nbr;
int AsciiNbr;


void my_print_n_ascii(void){

    printf("how many: \n"); 
    scanf("%d", &Nbr);

    for(int i = 41; i < 126 ; i++)
    {
        print_char(i);
    }


    
}