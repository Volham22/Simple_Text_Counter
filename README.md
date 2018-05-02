# Simple Text Counter

Text Counter is a small program to count differents things in a brut text file.
The program can count differents things like letters (english alphabet), numbers and each characters in a file.

## Getting Started

First of all clone the git !
```
$ git clone https://github.com/Volham22/Simple_Text_Counter.git
```

### Prerequisites

To build Text Counter you will need a C++ compiler like g++ and cmake

```
$ sudo apt-get install g++ cmake
```

### Installing

#### Compile for a Linux system :

In the Text Counter folder type :
```
$ cmake .
```

Then you can build Text Counter :
```
$ make all
```

#### Compile for Windows :

You will need cmake, there is two ways to use cmake under windows :

    1. You can use cmake to generate makefile for MinGW :
    ```
    $ cmake -G"MinGW Makefiles"
    ```

    2. You can also use cmake to create a Code::Block or Visual Studio project to build it.
    ```
    $ cmake -G "Visual Studio 17" # For Visual Studio 2017
    ```
    or to create a Code::Blocks project :
    ```
    $ cmake -G"CodeBlocks - Unix Makefiles"
    ```
    

## How to use ?

Text counter is very easy to use, type from the Text Counter's folder :

```
$ ./Text_Counter <path_of_the_file> <numbers option or all characters>
```

Note that by default the mode is "letter counting" :

Example to use Text Counter in number mode :
```
$ ./Text_Counter text.txt number
```

Exemple to use Text Counter in all characters mode :
```
$ ./Text_Counter text.txt all
```
