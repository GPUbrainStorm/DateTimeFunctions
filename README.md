# DateTimeFunctions Unreal Engine Plugin

This Unreal Engine plugin provides various functions related to Date and Time, including countdown functionality using event binding. 

Packaged and tested on **Unreal Engine 5.2** for **Windows**, but it can theoretically be compiled on other versions and platforms.

## Installation
1. Download the correct version of the plugin from [release](https://github.com/GPUbrainStorm/DateTimeFunctions/releases).
2. Extract the ZIP to your project folder under the following path:
   - `YourProjectFolder/Plugins`
   - *(If the `Plugins` folder doesn’t exist, create it.)*

## Features

### DateTime Operations
- **Unix Timestamp**: Returns the seconds elapsed since 01/01/1970.
- **Subtract Dates**: Calculates the difference between two dates in seconds.
- **Get DateTime in a Selected Timezone**: Returns the date and time of the selected timezone.

### DateTime Formatting
- **Format Date**: Formats any date to one of the following options:
  - `DD/MM/YYYY`
  - `MM/DD/YYYY`
  - `Mon, DD YYYY`
  - `DD Mon YYYY`
  - `DD Month YYYY`
  - `YYYY-MM-DD`
- **Format Seconds**: Converts seconds into a selected time format:
  - `HH:MM:SS`
  - `HH:MM`
  - `MM:SS`

### Countdown Functionality
- **Countdown Timer**: Accepts input in seconds.
  - An event can be bound and triggered every second to update the remaining time.
  
#### Countdown Usage Example:
![Countdown Example](https://github.com/user-attachments/assets/e398788c-ec86-4fcb-84ad-99f73ce6e0e3)

## Available Functions

### General Date and Time Functions
1. **Unix Timestamp**: Returns the seconds since 01/01/1970.
2. **Subtract Dates**: Returns the difference between two dates in seconds.
3. **Get DateTime in Selected Timezone**: Returns the date and time in the specified timezone.

### Formatting Functions
4. **Format Date**: Formats a date to the desired format (listed above).
5. **Format Seconds**: Formats seconds into `HH:MM:SS`, `HH:MM`, or `MM:SS`.

### Utility Functions
6. **Hours to Seconds**: Converts a number of hours (accepts floats) to seconds. 
   - Example: `1.5 hours` → `5400 seconds`
7. **Get Month Short Name**: Returns the short name of a month (e.g., `1` → `Jan`).
8. **Get Month Full Name**: Returns the full name of a month (e.g., `1` → `January`).
