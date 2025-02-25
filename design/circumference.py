#!/usr/bin/env python3
"""
Created by: Daniel Jeffrey
Created on: Feb 2025
This module calculates the circumfernce of a circle
    with a given diameter.
"""
import math


def main() -> None:
    x = float(input("What is the diameter of the circle in mm?"))
    "The main() function calculates the area of a 15 mm circle,"
    print("If a circle has a radius of ", x, " mm:")
    print(f"Circumference is {(math.pi * x):.5f} mm.")


if __name__ == "__main__":
    main()
