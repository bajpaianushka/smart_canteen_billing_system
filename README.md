# Smart Canteen Billing System

**Mini Hackathon -- C Programming Lab**\
**Team members:**
Anushka Bajpai
SAP ID: (590039934)
Batch: 52
Jai Singh 
SAP ID: (590041899)
Batch: 52 
Akshit ojha
SAP ID: 5900
Batch: 52

**Language:** C (C99)

## 1. Problem statement

Develop a menu-driven billing system for a college canteen. Customers
can select food items, enter quantities, manage their cart, and generate
an itemized bill. A discount is applied when the subtotal reaches the
specified threshold.

## 2. Objectives

-   Provide a simple menu-driven ordering interface.
-   Accept multiple food items and quantities.
-   Calculate item-wise amounts and the subtotal.
-   Allow users to view, update, and remove cart items.
-   Validate user input and prevent invalid menu selections or
    quantities.
-   Generate a final receipt and apply the specified discount.

## 3. Features

1.  Display six food items with prices.
2.  Add multiple items to a cart.
3.  View the current cart and subtotal.
4.  Update an item's quantity.
5.  Remove an item from the cart.
6.  Checkout and print an itemized receipt.
7.  Apply a 10% discount when the subtotal is ₹500 or more.
8.  Validate numeric input and quantity limits.

## 4. Menu and pricing

    ID Item             Price
  ---- -------------- -------
     1 Burger             ₹60
     2 Pizza             ₹120
     3 Sandwich           ₹50
     4 Cold Coffee        ₹40
     5 French Fries       ₹70
     6 Momos              ₹80

**Discount rule:** 10% discount when subtotal is ₹500 or more. This is
the team's chosen implementation of the guideline's discount
requirement.

## 5. C concepts used

-   Variables and constants
-   Operators and conditional statements
-   `while`, `do-while`, and `for` loops
-   Arrays
-   Strings
-   Structures (`struct`)
-   Functions and function arguments
-   Pointers to structures
-   Input validation using `fgets()` and `strtol()`
-   `switch` statement

## 6. Algorithm / pseudocode

1.  Start the program.
2.  Initialize the menu and an empty cart.
3.  Display the main menu.
4.  Read and validate the user's choice.
5.  Depending on the choice:
    -   Display the food menu.
    -   Add an item and quantity to the cart.
    -   Display cart contents and subtotal.
    -   Update a cart item's quantity.
    -   Remove an item from the cart.
    -   Generate an itemized bill and apply the discount.
    -   Exit the program.
6.  Repeat until the user chooses Exit.
7.  End.

## 7. Flowchart

See `flowchart.png` in this repository.

## 8. Compile and run

### GCC (Linux / macOS / MinGW)

``` bash
gcc -std=c99 -Wall -Wextra -pedantic canteen_billing.c -o canteen_billing
./canteen_billing
```

On Windows Command Prompt:

``` bash
gcc -std=c99 -Wall -Wextra -pedantic canteen_billing.c -o canteen_billing.exe
canteen_billing.exe
```

## 9. Sample test cases

  -----------------------------------------------------------------------
  Test                    Input / action          Expected result
  ----------------------- ----------------------- -----------------------
  1                       Add 2 Burgers           Burger amount = ₹120

  2                       Add 3 Pizzas            Pizza amount = ₹360

  3                       Checkout after tests 1  Subtotal ₹480; discount
                          and 2                   ₹0; payable ₹480

  4                       Add 2 Pizzas and 5      Subtotal ₹540; discount
                          Burgers                 ₹54; payable ₹486

  5                       Enter menu choice 9     Input rejected; valid
                                                  range shown

  6                       Enter quantity 0        Input rejected;
                                                  quantity must be
                                                  positive

  7                       Update an item to       Item removed from cart
                          quantity 0              

  8                       View cart before adding Empty-cart message
                          items                   shown
  -----------------------------------------------------------------------

### Sample actual output (tested run)

```text
Subtotal:                         Rs.540
Discount (10% if bill >= Rs.500): Rs.54
FINAL AMOUNT PAYABLE:             Rs.486
```

The program was compiled with GCC using `-std=c99 -Wall -Wextra -pedantic` and the sample order was run successfully.

## 10. Team contribution plan

  -----------------------------------------------------------------------
  Team member                         Suggested responsibility
  ----------------------------------- -----------------------------------
  Jai Singh                           Menu, cart operations, integration
                                      and code walkthrough

  Anushka Bajpai                      Input validation, bill calculation,
                                      testing and documentation

  Both                                Debugging, final testing, GitHub
                                      upload and presentation
  -----------------------------------------------------------------------

Both members should understand the complete source code and be ready to
explain any function during the faculty viva.

## 11. Limitations and possible future improvements

-   The program stores cart data only while it is running.
-   Menu prices are fixed in the source code.
-   It does not connect to a real payment gateway or inventory database.

Possible future improvements include saving orders to a file, adding an
order number, and maintaining stock quantities. These are not part of
the current implementation.

## 12. Repository structure

``` text
Batch_TeamNo_CanteenBilling/
├── canteen_billing.c
├── README.md
├── presentation.pptx
└── flowchart.png
```
