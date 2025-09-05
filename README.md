# Workshop #2 - Introduction to Programming

This project implements a C++ program that solves basic programming exercises using the if and the switch sentence.

## Description

The program displays a main menu with **6 points**, each corresponding to a different exercise:

1. **Point 1**

A program that reads an employee's salary and gender data. Calculate the salary for the following year if the company increases the salary by 7% for men and 10% for women.  
   
   - Men receive a 7% increase.  
   - Women receive a 10% increase.  
   - Validates that salary is greater than 0 and gender is `M` or `F`.

2. **Point 2**

A program to determine the value of an order. The data is the quantity and unit value of the item. The following discount policy applies: if the gross purchase value exceeds $500,000, a 5% discount is applied; otherwise, there is no discount. Regardless of the discount, a 20% VAT must be charged on the gross value. The output will be the net value to be collected.  

   - Reads quantity and unit value of items.  
   - If the gross purchase value exceeds **$500,000**, applies a 5% discount.  
   - Adds a **20% VAT** to the gross value.  
   - Outputs the final amount to be paid.  

3. **Point 3**

A program that calculates the monthly cell phone rate, which depends on the number of minutes used and is based on the following criteria:

   - Base fee: **$50,000**.  
   - First 500 minutes → $100 per minute.  
   - Extra minutes → 40% discount on the per-minute rate ($60 per minute).  
   - Validates that minutes are greater than 0.  

4. **Point 4**

Sunday movie admission has a promotional price for children (12 or younger) and seniors (60 or older) of 50% of the ticket price. Adults and youth pay the full rate for that time slot, which is $12,000. Write a program that tells someone arriving at the box office how much they should 
pay for the ticket. Would you ask that person anything?

   - Base ticket price: **$12,000**.  
   - Children (≤12 years old) and seniors (≥60 years old) → 50% discount.  
   - Adults and youth → pay full price.  

5. **Point 5**

A program that simulates a calculator. It must read two numbers and a character. If the character is a +, the sum is printed. If it is a –, the difference is printed. This is done in the same way as multiplication, division, and mod. Use switch.

   - Reads two integers and an operator.  
   - Supported operations:  
     - Addition (+)  
     - Subtraction (–)  
     - Multiplication (*)  
     - Division (/)  
     - Mod (%)
   - Displays the result of the operation.  

6. **Point 6**

A program that calculates the net cost of a person's admission to an amusement  park. The data available for each person is: age, category (represented by a character) (L: Local / T: Tourist), and ticket type (also represented by a character) (N: Regular / E: Special / P: Plus). The gross cost of admission is $20,000 for adults and $15,000 for children (under 12) and seniors (over 60). For this month, a discount has been implemented.

   - Inputs: age, category (Local / Tourist), and ticket type (Normal / Special / Plus).  
   - Base cost:  
     - Adults → $20,000  
     - Children (<12) and seniors (>60) → $15,000  
   - Discounts vary depending on category and ticket type.

   | Age group                         | Base price | Local (L)                                    | Tourist (T)                                            |
   |-----------------------------------|------------|----------------------------------------------|-------------------------------------------------------|
   | Children (<12) and Seniors (>60)  | $15,000    | $5,000 fixed discount (+1% if Plus)          | $5,000 fixed discount + extra discount (2% N, 3% E, 4% P) |
   | 12 to 59 years old                | $20,000    | Only 1% discount if Plus                     | Discount according to entry (2% N, 3% E, 4% P)  |
   
   - Applies additional reductions for locals and tourists.  

## How to Run

1. **Download and extract it from the .zip**
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
