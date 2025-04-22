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
  test_base(2, ft_printf(" "), printf(" "));
  test_base(3, ft_printf("NULL %s NULL", NULL), printf("NULL %s NULL", NULL));
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
  test_base(10, ft_printf("%i%i%i", 5, 2147483647, -2147483647), printf("%i%i%i", 5, 2147483647, -2147483647));
  test_base(11, ft_printf("%i      ", 5), printf("%i      ", 5));
}

void decimal_test()
{
  test_base(12, ft_printf("%d", 5), printf("%d", 5));
  test_base(13, ft_printf("%d%%", -920), printf("%d%%", -920));
  test_base(14, ft_printf("%d%d%d", 5, 2147483647, -2147483647), printf("%d%d%d", 5, 2147483647, -2147483647));
  test_base(15, ft_printf("%d      ", 5), printf("%d      ", 5));
}

void unbr_test()
{
  test_base(16, ft_printf("%u", 0), printf("%u", 0));
  test_base(17, ft_printf("%u %u%%", 1001), printf("%u %u%%", 1001));
  test_base(18, ft_printf("%u%%%s", -1, NULL), printf("%u%%%s", -1, NULL));
}

int main()
{
  simple_test();
  str_test();
  integer_test();
  decimal_test();
  unbr_test();
  return 0;
}