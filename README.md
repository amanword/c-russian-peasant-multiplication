# What is Russian Peasant Multiplication
The way most people learn to multiply large numbers looks something like this:
```
    86
  x 57
 ------
   602
+ 4300
 ------
  4902
```

If you know your multiplication facts, this "long multiplication" is quick and relatively simple. However, there are many other ways to multiply. One of these methods is often called the **Russian peasant algorithm**. You don't need multiplication facts to use the Russian peasant algorithm; you only need to double numbers, cut them in half, and add them up. Here are the rules:

- Write each number at the head of a column.
- Double the number in the first column, and halve the number in the second column. If the number in the second column is odd, divide it by two and drop the remainder.
- If the number in the second column is even, cross out that entire row.
- Keep doubling, halving, and crossing out until the number in the second column is 1.
- Add up the remaining numbers in the first column. The total is the product of your original numbers.

# How This Code Work
Here are my implementations of Russian Peasant Multiplication implemented in C language. You can open `prog.c` file in this repo and learn it
