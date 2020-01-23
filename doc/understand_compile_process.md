- [Understand the Entire Compilation Process](#understand-the-entire-compilation-process)
  - [Simple](#simple)
    - [Preprocess](#preprocess)
    - [Compile](#compile)
    - [Assemble](#assemble)
    - [Linking](#linking)
  - [Linking other libraries during linking phase](#linking-other-libraries-during-linking-phase)

# Understand the Entire Compilation Process

- Preprocess
- Compile
- Assemble
- Linking

## Simple

Simple way to understand what happens under the hood

### Preprocess

Writes the contents of preprocessed file to `main.e`
```
gcc -E main.c >> main.e
```

### Compile

Writes the assembly contents to `main.s`
```
gcc -S main.c
```

### Assemble

Compiles and Assembles the code to binary format `main.o`
```
gcc -c main.c
```

### Linking

Combines various output files and adds them to run.exe
```
gcc main.o other.o ... -o run.exe
```

## Linking other libraries during linking phase

> TODO
