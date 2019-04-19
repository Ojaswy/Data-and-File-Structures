## Conversion and Evaluation of ```Infix, Prefix and Postfix Expressions```

### Infix

Operators are written in-between their operands. This is the usual way we write expressions. 

An expression such as ```A * ( B + C ) / D``` is usually taken to mean something like: "First add B and C together, then multiply the result by A, then divide by D to give the final answer."

### Prefix

Operators are written before their operands. The expressions given above are equivalent to ```/ * A + B C D ```

Prefix "operators are evaluated left-to-right", they use values to their right, and if these values themselves involve computations then this changes the order that the operators have to be evaluated in. In the example above, although the division is the first operator on the left, it acts on the result of the multiplication, and so the *multiplication has to happen before the division and similarly the addition has to happen before the multiplication.*

### Postfix

Operators are written after their operands. The infix expression given above is equivalent to ```A B C + * D /``` 

The order of evaluation of operators is always left-to-right, and brackets cannot be used to change this order. Because the "+" is to the left of the "*" in the example above, the addition must be performed before the multiplication.
