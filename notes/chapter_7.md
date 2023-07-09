# Switch case control instruction

```C
switch (i)
{
case 1:
    printf("Case 1\n");
case 2:
    printf("Case 2\n");
default:
    printf("Default case\n");
case 3:
    printf("Case 3\n");
}
```

This will show both default case and case 3 if i=1/i=2;

-   No need to enclose the "case" block statements in brackets.

```c
case 3 + 7: // Valid C code.
case a + b: // This is invalid.
```

-   Continue statement doesn't work in switch-cases.

```C
//  This is invalid code.
switch(i){
    // ...
    case 3:
    // ...
    case 2+1;
}
```

-   Switch is faster than equivalent if-else ladder.
    -   C compiler creates a jump table at the time of compilation. At time the computer looks up the jump table for which table to be executed. This is faster than if-else evaluation at the time of execution.
-   It is useful to use goto: statement when you want to come out of nested loop or nested instructions.
