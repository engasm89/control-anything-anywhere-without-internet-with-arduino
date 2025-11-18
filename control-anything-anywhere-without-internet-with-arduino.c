/*
 * Course: Control Anything Anywhere Without Internet With Arduino
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Control Anything Anywhere Without Internet With Arduino" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/control-anything-anywhere-without-internet-with-arduino/
 * Repository: https://github.com/engasm89/control-anything-anywhere-without-internet-with-arduino
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Simulate DTMF tone decoding and relay control without internet
#include <stdio.h> // Logs

static void handle_dtmf(char digit) { // Handle one DTMF digit
  if (digit == '1') printf("Relay1 ON\n"); // Command
  else if (digit == '0') printf("Relay1 OFF\n"); // Command
  else printf("Unknown DTMF '%c'\n", digit); // Unknown
}

int main(void) { // Program entry point
  printf("Control Anything Anywhere without Internet with Arduino\n"); // Title
  const char* seq = "11001"; // DTMF sequence
  for (const char* p = seq; *p; ++p) handle_dtmf(*p); // Process digits
  return 0; // Exit
} // End of main function
