// Simulate DTMF tone decoding and relay control without internet
#include <stdio.h> // Logs

static void handle_dtmf(char digit) { // Handle one DTMF digit
  if (digit == '1') printf("Relay1 ON\n"); // Command
  else if (digit == '0') printf("Relay1 OFF\n"); // Command
  else printf("Unknown DTMF '%c'\n", digit); // Unknown
}

int main(void) { // Entry
  printf("Control Anything Anywhere without Internet with Arduino\n"); // Title
  const char* seq = "11001"; // DTMF sequence
  for (const char* p = seq; *p; ++p) handle_dtmf(*p); // Process digits
  return 0; // Exit
} // End main
