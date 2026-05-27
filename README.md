# BMI Calculator

A simple command-line BMI (Body Mass Index) calculator written in C.

---

## Features
- Calculates BMI from weight (kg) and height (cm)
- Displays BMI category (Underweight, Normal, Overweight, Obese)
- Input validation for invalid values
- Option to calculate multiple times in one session

---

## How to Compile and Run

**Requirements:** GCC compiler

```bash
gcc bmi_calculator.c -o bmi_calculator
./bmi_calculator
```

---

## Example Output

```a
BMI Calculator
Enter Your Weight in KGs: 70
Enter Your Height in CMs: 175
Your Height and Weight are 175.00 cm and 70.00 kg.
Your BMI is: 22.86
Congratulations! You have Normal Weight
Calculate again? (y/n): n
Thank you for using BMI Calculator!
```

---

## BMI Categories (WHO Standard)

| BMI Range      | Category      |
|----------------|---------------|
| Below 18.5     | Underweight   |
| 18.5 – 24.9    | Normal weight |
| 25.0 – 29.9    | Overweight    |
| 30.0 and above | Obese         |

---

## Author

Made with ❤️ by Nishant Tiwari as a beginner C programming project.

---

## License

This project is open source and free to use.
