#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[n];  // frequency array
    for (int i = 0; i < n; i++) {
        freq[i] = -1;  // initialize
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // mark duplicate
                }
            }
            freq[i] = count;
        }
    }

    // Find greatest and lowest frequency
    int maxFreq = freq[0], minFreq = freq[0];
    int maxElem = arr[0], minElem = arr[0];

    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                maxElem = arr[i];
            }
            if (freq[i] < minFreq) {
                minFreq = freq[i];
                minElem = arr[i];
            }
        }
    }

    printf("Element with greatest frequency: %d (appears %d times)\n", maxElem, maxFreq);
    printf("Element with lowest frequency: %d (appears %d times)\n", minElem, minFreq);

    return 0;
}