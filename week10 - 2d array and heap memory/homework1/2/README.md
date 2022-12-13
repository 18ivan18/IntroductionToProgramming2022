## Compiled with
```
$ g++ --version 
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

`g++ main.cpp -o 2.out && cat input.txt | 2.out`

where `input.txt` is a file in the same directory with `q` queries and each is example input for the task  

```
$ cat input.txt
3

5 
5 2 3 4 5

5
4 3 5 19 2

5
4 8 5 3 10
```

## Expected output
```
<5,2> <5,3> <5,4> <2,4> <3,4> 5
<3,2> <5,2> <19,2> 3
<5,3> <5,10> <3,10> 3
```