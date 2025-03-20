#include "../includes/ft_printf.h"
#include <stdio.h>
#include <stdbool.h>

void test_base(int test_nb, int ft, int original)
{
  printf("-> TEST %i\n", test_nb);
  if (ft == original)
    printf("\033[32mPASSED!\033[0m\n");
  else
    printf("\033[31mNOT PASSED!\033[0m\n");
  printf("\n");
}

void simple_test()
{
  test_base(1, ft_printf("test1"), printf("test1"));
  test_base(2, ft_printf(""), printf(""));
  test_base(3, ft_printf("%%"), printf("%%"));
}

void str_test()
{
  test_base(4, ft_printf("%s", "str"), printf("%s", "str"));
  test_base(5, ft_printf("%s%s", "str", "other"), printf("%s%s", "str", "other"));
  test_base(6, ft_printf("%s%c", "str", 'a'), printf("%s%c", "str", 'a'));
  test_base(7, ft_printf("%c%%%s%%", 'c', "str"), printf("%c%%%s%%", 'c', "str"));
}

void integer_test()
{
  test_base(8, ft_printf("%i", 5), printf("%i", 5));
  test_base(9, ft_printf("%i%%", -920), printf("%i%%", -920));
  test_base(10, ft_printf("%i%i%i%i%i", 5, 2147483647, 2147483648, -2147483648, -2147483649), printf("%i%i%i%i%i", 5, 2147483647, 2147483648, -2147483648, -2147483649));
  test_base(11, ft_printf("%i      ", 5.5), printf("%i      ", 5.5));
}

int main()
{
  simple_test();
  str_test();
  integer_test();
  return 0;
}