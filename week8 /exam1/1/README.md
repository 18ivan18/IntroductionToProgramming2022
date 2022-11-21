## Compiled with
```
$ g++ --version 
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

`g++ main.cpp -o 1.out && cat input.txt | 1.out`

where `input.txt` is a file in the same directory

```
$ cat input.txt
241
```

## Expected output
```
Super-Primes less than or equal to 241 are:
3 5 11 17 31 41 59 67 83 109 127 157 179 191 211 241
```