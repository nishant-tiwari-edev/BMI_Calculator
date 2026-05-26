# BMI Calculator

A simple command-line BMI (Body Mass Index) calculator written in C. Enter your weight and height, and the program calculates your BMI instantly.

---

## What is BMI?

BMI (Body Mass Index) is a numerical value calculated from a person's weight and height. It is commonly used as a screening tool to categorize weight status.

**Formula:**

```
BMI = Weight (kg) / Height (m)²
```

> This program accepts height in **centimeters** and converts it internally.

---

## How to Compile and Run

**Requirements:** GCC compiler

**Compile:**
```bash
gcc bmi_calculator.c -o bmi_calculator
```

**Run:**
```bash
./bmi_calculator
```

---

## Example Output

```
BMI Calculator
Enter Your Weight in KGs: 70
Enter Your Height in CMs: 175
Your Height and Weight are 175.00 cm and 70.00 kg.
Your BMI is: 22.86
```

---

## BMI Categories (WHO Standard)

| BMI Range     | Category       |
|---------------|----------------|
| Below 18.5    | Underweight    |
| 18.5 – 24.9   | Normal weight  |
| 25.0 – 29.9   | Overweight     |
| 30.0 and above| Obese          |

---

## Project Structure

```
├── bmi_calculator.c   # Main source file
└── README.md          # Project documentation
```

---

## Author

Made with ❤️ as a beginner C programming project.

---

## License

This project is open source and free to use.
