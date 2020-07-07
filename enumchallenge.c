#include <stdio.h>
#include <stdlib.h>

int main() {

  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

  enum company google = GOOGLE;
  enum company xerox = XEROX;
  enum company ebay = EBAY;

  printf("%d\n \b%d\n \b%d\n", xerox, google, ebay);

  return 0;
}