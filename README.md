<p align="left">
  <img src="https://img.shields.io/badge/42-Barcelona-black" />
  <img src="https://img.shields.io/github/license/alanusse/ft_printf" />
  <img src="https://img.shields.io/github/languages/code-size/alanusse/ft_printf" />
</p>

# ft_printf

`ft_printf` is a remake of the original `printf` function of C.
This library allows you to format and print text in console like C `printf` standard function.

## Requirements

To use this library you need to have GCC compiler installed in your computer.

## Installation

You can use this library in your project following these steps:

1. Clone this repository and enter into folder.

```bash
git clone https://github.com/alanusse/ft_printf && cd ft_printf
```

2. Compile the code and create the library.

```bash
make && make clean
```

3. Use the ft_printf in your code.
```c
// main.c
#include "ft_printf.h"

int main()
{
  ft_printf("Hello world!");
  return (1);
}
```

4. Compile your code including the library.
```bash
gcc main.c libftprintf.a -o main.out
```

5. Execute your code.
```c
./main.out

// output: Hello world!
```

## Use

You can use these conversions in `ft_printf` function.

| Conversion | Description |
| :---: | --- |
| `%%` | Print a **%** character |
| `%c` | Print a character |
| `%s` | Print a string |
| `%i` | Print an integer |
| `%u` | Print an unsigned integer |
| `%p` | Print a memory address in hexadecimal number |
| `%x` | Print an hexadecimal number in lowercase |
| `%X` | Print an hexadecimal number in uppercase |

### Examples

```c
ft_printf("%%");
// output: %
```

```c
ft_printf("%c", 'z');
// output: z
```

```c
ft_printf("%s", "Hello world!");
// output: Hello world!
```

```c
ft_printf("%i", -100);
// output: -100
```

```c
ft_printf("%u", 4500);
// output: 4500
```

```c
char str[] = "ft_printf";

ft_printf("%p", str);
// output: 0xffffff
```

```c
ft_printf("%x", 1234567);
// output: 12d687
```

```c
ft_printf("%X", 1234567);
// output: 12D687
```