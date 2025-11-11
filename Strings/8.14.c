#include <stdio.h>

int main() {
    char phone[20];
    int areaCode;
    long phoneNumber;

    printf("Enter phone number in format (XXX) XXX-XXXX: ");
    scanf("%s",phone);  // simple input, proof of concept only

    int first, last;

    // sscanf extracts and converts directly to numbers
    sscanf(phone, "(%d) %d-%d", &areaCode, &first, &last);

    // Combine first three and last four digits into a single long
    phoneNumber = first * 10000L + last;

    printf("Area code: %d\n", areaCode);
    printf("Phone number: %ld\n", phoneNumber);

    return 0;
}
