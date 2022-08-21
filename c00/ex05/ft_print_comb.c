//012, 013, 014, 015, 016 , 017, 018 , 019, 023, .....789
#include<unistd.h>



void ft_print_comb()
{
    int  a;
    int  b;
    int  c;
    a = 48 ; //0;
    
    while (a <= 55 ) //55 = 7
        {
            b = a + 1;
            while (b <= 56)//56 =8
            {
                c = b  + 1;
                while  ( c <= 57) //57 =9
                {
                    write(1, &a, 1);
                    write(1, &b ,1);
                    write(1, &c,1);
                    if(a != 7)
                    {
                        write (1, ", ", 2);
                    }
                    c++;
                }
                b++;
            }
            a++;

        } 
    


}


int main(void)
{
    ft_print_comb();
}