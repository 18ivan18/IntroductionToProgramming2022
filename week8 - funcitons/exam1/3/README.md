## Compiled with
```
$ g++ --version 
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

`g++ main.cpp -o 3.out && cat input.txt | 3.out`

where `input.txt` is a file in the same directory with `q` queries and each is example input for the task  

```
$ cat input.txt
2

10
3 15 -1

10 
2 25 14 -1
```

## Expected output
```
2 4 7 8 10 
3 9 
```