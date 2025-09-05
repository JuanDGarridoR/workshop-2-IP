# Workshop #2 - Introduction to Programming

This project implements a C++ program that solves six basic programming exercises using the if and the switch sentence.

## Description

The program displays a main menu with **6 points**, each corresponding to a different exercise:

1. **Point 1**

A program that reads an employee's salary and gender data. Calculate the salary for the following year if the company increases the salary by 7% for men and 10% for women.  
   
   - Men receive a 7% increase.  
   - Women receive a 10% increase.  
   - Validates that salary is greater than 0 and gender is `M` or `F`.

2. **Point 2**

A program to determine the value of an order. The data is the quantity and unit value of the item. The following discount policy applies: if the gross purchase value exceeds $500,000, a 5% discount is applied; otherwise, there 
is no discount. Regardless of the discount, a 20% VAT must be charged on the gross 
value. The output will be the net value to be collected.  

   - Reads quantity and unit value of items.  
   - If the gross purchase value exceeds **$500,000**, applies a 5% discount.  
   - Adds a **20% VAT** to the gross value.  
   - Outputs the final amount to be paid.  

3. **Point 3**

A program to calculate the monthly cell phone fee.  

   - Base fee: **$50,000**.  
   - First 500 minutes → $100 per minute.  
   - Extra minutes → 40% discount on the per-minute rate ($60 per minute).  
   - Validates that minutes are greater than 0.  

4. **Point 4**

A program to calculate the price of a movie ticket on Sunday promotions.  

   - Base ticket price: **$12,000**.  
   - Children (≤12 years old) and seniors (≥60 years old) → 50% discount.  
   - Adults and youth → pay full price.  

5. **Point 5**

A program that simulates a calculator using `switch`. 

   - Reads two integers and an operator.  
   - Supported operations:  
     - Addition (+)  
     - Subtraction (–)  
     - Multiplication (*)  
     - Division (/)  
     - Modulo (%)  
   - Displays the result of the operation.  

6. **Point 6**

A program that calculates the **net cost of admission** to an amusement park.  

   - Inputs: age, category (Local / Tourist), and ticket type (Normal / Special / Plus).  
   - Base cost:  
     - Adults → $20,000  
     - Children (<12) and seniors (>60) → $15,000  
   - Discounts vary depending on category and ticket type.  
   - Applies additional reductions for locals and tourists.  

## How to Run

1. **Download it**  
2. **Find the downloads folder (or the folder where you saved it) in the terminal.**  
3. **Enter the following commands**  
   - Compile:
      ```bash
      g++ workshop-2-IP.cpp -o workshop-2-IP
      ```
   - Run it:
      ```bash
      workshop-2-IP.exe
      ```

## Considerations

- Make sure you have a C++ compiler installed.
