# Function Pointer Example

## Compile

```
make
```

## Run

```
make run
```

## Clean

```
make clean
```

## Explanation

`typedef <return_type> <type_name>(<argument_list>);`

Eg. If we want to define a function type called `intPtr` that takes two `int` as arguments and returns an `int*`,

we write `typedef int* intPtr(int, int);`

If we want to define a function **pointer** type called `intPtr` that takes two `int` as arguments and returns an `int*`,

we write `typedef int* (*intPtr)(int, int);`

TODO: explain the difference
