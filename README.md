# ft_printf

## About ft_printf

* `ft_print` is a reproduction of the function [printf](https://en.wikipedia.org/wiki/Printf_format_string)

* The option of `printf` you can use :
```
- type field: : sSpdDioOuUxXcC%

- flags field: #0-+ and space

- width field

- precision field

- length field: hh, h, l, ll, j, and z

```

## What you need for make work `ft_printf` ?

* gcc or clang

* make

* [ar](https://linux.die.net/man/1/ar)

* [C library](https://en.wikipedia.org/wiki/C_standard_library)

## How make work `ft_printf` ?

* Use `make` to compile 'libftprintf.a'.

* Include libftprintf.a in your software when you compile.

## Rules of Makefile

* `all`: compile libftprintf.a

* `clean`: delete objects

* `fclean`: call `clean` and delete `libftprintf.a`

* `re`: call `fclean` and `all`

## Notes

* If the compilation fails delete `$(CFLAGS)` in makefile line 8 because this project was made on MacOS and compiled with clang
