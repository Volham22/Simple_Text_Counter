# Simple Text Counter

Text Counter is a small program to count differents things in a brut text file.
The program can count differents things like letters (english alphabet), numbers and each characters in a file.

## Getting Started

First of all clone the git !
```
$ git clone https://github.com/Volham22/Simple_Text_Counter.git
```

### Prerequisites

To build Text Counter you will need a C++ compiler like g++

```
$ sudo apt-get install g++
```

### Installing

#### Compile for a Linux system :

Now the instalation

Go to Text Count's folder and type :

```
$ make all
```

Then you can launch Text Counter with :

```
$ ./Text_Counter
```

#### Compile for Windows :

You will need mingw, to install it run the following command :
```
$ sudo apt-get install mingw-w64
```

Then it's easy run :
```
$ make windows
```

Wait a bit and a .exe file will appear in your current folder, now run it under windows in a command prompt !

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
