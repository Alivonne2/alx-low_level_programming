:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
:~/c/0x00$ echo $?
1
:~/c/0x00$ ./quote 2> q
~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
:~/c/0x00$ grep printf < 101-quote.c
:~/c/0x00$ grep put < 101-quote.c
:~/c/0x00$ 
