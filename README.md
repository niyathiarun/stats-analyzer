⭐**STATISTICS ANALYZER**

# Project Overview
A C program that processes embedded sensor data (ADC readings 0-255) to compute:
- Minimum • Maximum • Mean • Median 
- Descending sort (largest → smallest)

Perfect for: Piezo harvesters, temperature sensors, current monitoring

🔴**Live Demo Output**
ORIGINAL ARRAY:  
34  201  190  154  198  267  67  125  87  295  123  11  543  26  876

SORTED ARRAY (descending):
876 543  295  267  201  198  190  154  125  123  87  67  34  26  11

📝**STATISTICS**:
Mean:    217
Median:  190
Maximum: 876
Minimum: 11

**Technical Skills Mastered**
    Skill Category-->What I Implemented-->Real-World Value
🔗 Memory Management-->	unsigned char *ptr pointer arithmetic-->Direct hardware access (ADC/GPIO)
⚡ Embedded Math-->Integer-only sum/length division-->No FPU dependency, predictable timing
🔄 Algorithms-->Bubble sort(descending)-->Reliable, stack-safe sorting
🏗️ Software Design-->	stats.h + stats.c modular split-->Industry-standard firmware structure
⚙️ Build Systems-->GCC-ready clean compilation-->	ARM Cortex-M4 deployable
📚 Version Control-->Git commits + branching workflow	--> Professional development process



⚙️**Embedded Production Features:**
ZERO dynamic memory allocation (malloc-free)
Stack-friendly (no recursion)
8-bit data optimized (unsigned char 0-255)
Predictable execution time
No floating point operations
ARM Cortex-M compatible
Real sensor data processing pipeline


🔗**Real-World Applications**
Piezoelectric Energy Harvesters → ADC → Statistics → Dashboard
Temperature Sensors (DHT11) → ADC → Statistics → Monitoring  
Current Sensors (ACS712) → ADC → Statistics → Power Analysis
IoT Sensor Networks → Data Processing → Cloud Upload


**Author:**
Niyathi arun
ECE Student | Bengaluru, India
February 2026
Connect: [www.linkedin.com/in/niyathiarun]
