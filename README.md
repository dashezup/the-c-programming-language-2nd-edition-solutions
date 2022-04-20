## The C Programming Language, 2nd Edition - Solutions

Solutions to the exercises in the book "The C Programming Language, 2nd Edition"

### Indention Style

1TBS (OTBS): "one true brace style"

### Compilation

You can use `fzf` to search for source code files and then compile and run it

```sh
cc -ansi $(ls *.c | fzf --layout=reverse --height=10) && ./a.out
```

### Directory Naming

```console
$ mkdir -p $(read -r DIR; echo "$DIR" | tr ' ' '_' | tr A-Z a-z) && cd ./$_
Chapter 1/Exercise 1-15
```
