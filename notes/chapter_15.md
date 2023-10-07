# Strings

```C
scanf("%[^\n]s",str); // used to take multi-word string inputs
```

This tells the compiler to keep recieving characters till \n is encountered.

```C
 scanf("%[^\n\n]s", &str); // Doesn't wait for two empty line inputs
```

[Read more](./../testing/string_input_spec.c)
