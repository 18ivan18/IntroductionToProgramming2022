## Compiled with
```
$ g++ --version 
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

`g++ main.cpp -o 1.out && cat input.txt | 1.out`

where `input.txt` is a file in the same directory with `q` queries and each is example input for the task  

```
$ cat input.txt
4
123  3121 
12 1523 
-43550 340 
123 456
```

## Expected output
```
Equal strength  
First is weaker 
Second is weaker 
Not comparable
```