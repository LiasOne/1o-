// prog04.c – η αξία ενός ποσού σε ευρώ

#include <stdio.h>

int main()
{
  // 2 μεταβλητές κινητής υποδιαστολής
  float draxmes, euro;

  // μια μεταβλητή τύπου χαρακτήρα
  char beep;

  //καταχώρηση ενός ειδικού χαρακτήρα
  beep = '\007';

  printf("Θέλετε να μάθετε την αξία των χρημάτων σας σε δραχμές\n");
  printf("Παρακαλώ δώστε την αξία σε ευρώ\n");
  printf("και θα δούμε\n");

  // παίρνουμε δεδομένα από τον χρήστη
  scanf("%f", &euro);

  // ο συντελεστής 340.75 μετατρέπει τις δραχμές σε ευρώ96
  draxmes = 340.75 * euro;

  printf("%c Η αξία σε δραχμές είναι: %.2f%c. \n", beep, draxmes, beep);
}
