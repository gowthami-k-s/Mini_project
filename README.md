# Hotel Billing System in C

## Description

This is a simple **Hotel Billing System** developed using C programming.

The program allows the user to select food items from different categories, enter the quantity, and generate a final bill including **18% GST**.

## Features

* Starter menu
* Main course menu
* Dessert menu
* Select food items and quantity
* Calculate item-wise price
* Generate subtotal
* Calculate 18% GST
* Display final bill
* Display selected items with their quantities

## Menu

### Starter

* Gobi 65 - ₹100
* Chicken 65 - ₹120
* Chilli Chicken - ₹150

### Main Course

* Chicken Biryani - ₹200
* Naan and Butter Chicken - ₹180
* Thali - ₹320

### Dessert

* Ice Cream - ₹50
* Gulaab Jamun - ₹60
* Falooda - ₹100

## How to Run

Compile the program using GCC:

```bash
gcc hotel.c -o hotel
```

Run the program:

```bash
./hotel
```

## How It Works

1. The program displays the food categories.
2. The user selects a category.
3. The available items are displayed.
4. The user selects an item and enters the quantity.
5. The item price is calculated.
6. The user can continue adding items.
7. Selecting **Exit** generates the final bill.
8. The program calculates **18% GST** and displays the total amount.

## Concepts Used

* Variables and data types
* `printf()` and `scanf()`
* `do-while` loop
* `switch-case`
* `if-else`
* Arithmetic operations
* Counters and totals
* Basic C programming

## Author

**K S Gowthami**
