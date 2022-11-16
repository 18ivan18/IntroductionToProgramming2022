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
2
4
Error. Numbers do not contain the same amaount of digits.
Error. Numbers do not contain unique digits.
```