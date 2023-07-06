- You can initialize a variable and use it in the same statement. so this:-

```C++
int a = 4, b = a * 4;
int x,y,z;
x=y=z=10; // is also valid

// int i=j=k=70; // This is not valid
```

is valid C code.

- Modulus operator always returns with the same sign as the numerator.
- For same priority operation the order is from left to right.
- for integer operands and multiplication/division operations, it is best to use paranthesis.

```C
base = 5, h = 2;
ar = base / 2 * h;   // output: 4
ar = (base * h) / 2; // output: 5
```

Division only gives accurate answer if atleast one of the operands is a float/double. [Read more...](https://stackoverflow.com/questions/7571326/why-does-dividing-two-int-not-yield-the-right-value-when-assigned-to-double)
