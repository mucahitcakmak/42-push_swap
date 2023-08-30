# Push Swap

**This project sorts the numbers randomly entered into the program from smallest to largest.**

**I learned a lot of sorting algorithms while doing the project.** I developed some of these that are suitable for me and integrated them into my project.

<br>

## Project Details

It is not enough to use normal sorting algorithms in this project. Because there are certain rules for sorting, for example, you cannot move a number anywhere you want.**You can only do these with set rules**. *You can view the pdf for more details*.

This project uses different sorting algorithm according to the number range entered.
- **Sorts for 3 arguments** in a maximum of 2 moves.
- **Sorts in less than 12 moves for 5 arguments**.
    - **Calculates where the 2 smallest numbers are and assigns them to stack B**. The remaining ones in stack A work the algorithm I wrote before for the triple argument. When the sorting is complete, the numbers in stack B are sent back to stack A.
- **Only one algorithm works for numbers greater than 5**. It makes 6021 moves for 500 arguments *(and that's partly a good statistic)*.
    - **Basically this algorithm works on bits**. Therefore, it performs a fixed move for arguments of the same size.

<br>

## Sample Output
> Sorted in two moves.
```bash
make
./push_swap 3 2 1
ra
sa
```
