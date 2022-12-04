/* 3. BITWISE OPERATOR
  -  bitwise AND  &
  -  bitwise OR   |
  -  bitwise XOR  ^
  -  bitwise NOT  ~
  -  right shift  >>
  -  left shift   <<

  A. & operator(AND)
  0&0 = 0
  0&1 = 0
  1&0 = 0
  1&1 = 1
  */

  #include<stdio.h>
  #include<conio.h>
  main()
  {
  int x;
  clrscr();
  x=41&34;
  printf("%d",x);
  getch();
  }


  /*
  23-    0000 0000 0001 0111
  56-    0000 0000 0011 1000
  23&56- 0000 0000 0001 0000 = 16
  */
