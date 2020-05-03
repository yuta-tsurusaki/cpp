## `//`
Two slash signs indicate that the rest of the line is a comment.

## `#`
Lines beginning with a hash sign (`#`) are directives read and interpreted by what is known as the preprocessor. They are special lines interpreted before the compilation of the program itself begins.

### `#include <iostream>`
the preprocessor to include a section of standard C++ code, known as header iostream, that allows to perform standard input and output operations

## `std::cout`
**st**andar**d** **c**haracter **out**put device

## `<<`
inserted operator
indicates what follows is inserted into left something

## `auto`
```c++
int foo = 0;
auto bar = foo;  // the same as: int bar = foo; 
```

## `decltype`
```c++
int foo = 0;
decltype(foo) bar;  // the same as: int bar;
```

## `nullptr`
= null pointer



# compiling and execution
## complie
basic
`g++ [file you want to run] -o [output file name]`

c++11
add option `-std=c++11`
`g++ -std=c++11 [file you want to run] -o [output file name]`

## execute
`./[compiled file name]`

---
# Reference
http://www.cplusplus.com/doc/