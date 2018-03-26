# HW04 - Time Converter

Write a C++ program that reads a time from the keyboard. The time should be in the format "HH:MM AM" or "HH:MM PM". Hours can be one or two digits, minutes are exactly two digits, and AM/PM can be any mixture of uppercase and lowercase letters. For example, `1:10 am`, `12:05 PM`, and `12:45 aM` are valid inputs. Your program should include a function that takes a string parameter containing the time. This function should convert the time into a **four-digit** military time based on a 24-hour clock. For example, `1:10 AM` sould output `0110 hours`, `11:30 PM` would output `2330 hours`, `12:15 AM` would output `0015 hours` and `5:05 Pm` would output `1705 hours`. The function should return a string to be written to the screen by the main function.

Sample program runs are as follows:

```text
Enter time: 1:10 AM

Corresponding military time is 0110 hours
```

