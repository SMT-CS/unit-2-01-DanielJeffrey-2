// Copyright (c) 2025 D. Jeffrey All rights reserved
//
// Created by: D. Jeffrey
// Created on: Feb 2025
// This program calculates the circumference of a circle
//    with diameter

#include <stdio.h>
#include <math.h>

int main() {
    // this function calculates the area of a circle
    float diameter = printf("What is the diameter of the circle in mm?: \n");
    scanf("%f", &diameter);
    printf("If a circle has a radius of %.2f mm: \n", (diameter));
    printf("Circumference is %.5f mm.\n", (M_PI * diameter));
    return 0;
}
