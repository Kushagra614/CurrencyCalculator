**Currency Converter**

This C++ program is a simple and user-friendly currency converter that allows you to convert between various currencies:

* Rupee (INR)
* Dollar (USD)
* Euro (EUR)

**Features:**

* Supports six conversion options:
    * Rupee to Dollar
    * Dollar to Rupee
    * Rupee to Euro
    * Euro to Rupee
    * Dollar to Euro
    * Euro to Dollar
* Clear and concise user interface
* Repeatable calculations until you exit

**Usage:**

1. **Compile:** Use a C++ compiler (e.g., g++) to compile the source code (`currency_converter.cpp`):

   ```bash
   g++ currency_converter.cpp -o currency_converter
   ```

2. **Run:** Execute the compiled program (`currency_converter`):

   ```bash
   ./currency_converter
   ```

3. **Follow the prompts:**
   * Choose the conversion you want (1-6).
   * Enter the amount you want to convert.
   * The program will display the converted amount.
   * To use the calculator again, enter "yes" or any other character when prompted. Enter "no" to exit.

**Example:**

```
1. Rupee to Dollar
2. Dollar to Rupee
3. Rupee to euro
4. Euro to Rupee
5. Dollar to Euro
6. Euro to Dollar
7. Exit
Enter the choice: 1
Enter the amount: 1000
12.00 USD

Do you wish to use the Calculator again? (yes/no): yes

1. Rupee to Dollar
2. Dollar to Rupee
3. Rupee to euro
4. Euro to Rupee
5. Dollar to Euro
6. Euro to Dollar
7. Exit
Enter the choice: 3
Enter the amount: 500
5.50 EUR

Do you wish to use the Calculator again? (yes/no): no
```

**Note:**

* The currency conversion rates used in this program are for illustrative purposes only and may not reflect real-time exchange rates.
