# Introduction to C

The reason all the calculators use the "e" format for representing very large or very small values

> Because majority of them used either C or BASIC to write their code.
> [Read more...](https://en.wikipedia.org/wiki/Programmable_calculator#:~:text=On%2Dboard%20programming%20tools%20which,TI%2D83%20BBC%20Basic%20port.)

---

- C is a free-form language, which means that the alignments of text and spacing between the characters don't make a difference to the meaning of the code. (Python is clearly not a free-form language.)

- Return type of main function is always integer. Turbo C/C++ allows it to have "void" return type.

- If the function returns zero it means that the function ran succesfully. (This is probably where the "program exited with code 0" came from. [Read more...](https://retrocomputing.stackexchange.com/questions/24961/whats-the-origin-of-process-return-status-0-meaning-success) )

- Will have to use fflush(stdout) after every printf statement to "flush" out all the data in the output buffer. Input and output have different bufferstreams

- It is best to first multiply all the parts of the numerator the divide by the demoninator. example- instead of 22/7\*r\*r write (22\*r\*r)/7

- Scanf doesn't register newline when taking input as integer.
