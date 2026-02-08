# stats-analyzer

\# 🚀 C Statistics Analyzer - Embedded Data Processing



\[!\[GitHub stars](https://img.shields.io/github/stars/yourusername/stats-analyzer)](https://github.com/yourusername/stats-analyzer)

\[!\[License](https://img.shields.io/github/license/yourusername/stats-analyzer)](https://github.com/yourusername/stats-analyzer/blob/main/LICENSE)



Command-line tool analyzes unsigned char datasets (embedded sensor data) computing \*\*min/max/mean/median\*\* with descending sort. Production-ready C for embedded systems.



\## ✨ Features

\- Integer-only math (no floating point)

\- Bubble sort optimized for embedded constraints

\- Unsigned char (0-255) - perfect for ADC readings

\- Clean gcc makefile build







\## Technical Implementation



\### Core Algorithms

| Function | Algorithm | Time | Embedded Notes |

|----------|-----------|------|---------------|

| `sort\_array()` | Bubble Sort (descending) | O(n²) | Simple, no recursion stack |

| `find\_maximum()` | Linear scan | O(n) | Single pass, minimal memory |

| `find\_minimum()` | Linear scan | O(n) | Single pass optimization |

| `find\_mean()` | Sum ÷ length | O(n) | Integer division floors result |

| `find\_median()` | Sort → middle element(s) | O(n²) | Even arrays avg middle 2 |



\### Embedded Features

\- Pointer arithmetic: `unsigned char \*ptr`

\- Modifies array in-place (no malloc)

\- No dynamic memory 

\- Integer-only math

\- Predictable stack usage





Original Array:

34 201 190 154 198 267 67 125 87 295 123 11 543 26 876 



Sorted Array (descending):

876 543 295 267 201 198 190 154 125 123 87 67 34 26 11 



=== STATISTICS ===

Mean:    217

Median:  190

Maximum: 876

Minimum: 11





\## 🚀 Quick Demo

```bash

gcc -Wall -std=c99 stats.c -o stats

./stats


\*\*Niyathi arun kurthkoti\*\* - ECE Student | Embedded Systems Portfolio  

\*\*Feb 2026\*\*



