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

int main()
{
  simple_test();
  str_test();
  return 0;
}