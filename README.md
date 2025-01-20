# DateTimeFunctions-UnrealEnginePlugin
 This is an Unreal Engine plugin that provides some functions related to Date and Time with a countdown functionality using event binding.
Packaged and tested on Unreal Engine 5.2 on windows only but in theory it can be compiled on any other version and for any other platform.

To use it, just download it on your machine as zip file then extract to your project folder: YourProjectFolder -> Plugins (if this folder doesn't exist you can create it).

Features:

1- DateTime operations: Unix Timestamp, Subtract Dates (Result in seconds), Get time in a selected timezone.

2- DateTime Formating: Format any date to a selected formt. Available formats are: DD/MM/YYYY | MM/DD/YYYY | Mon,DD YYYY | DD Mon YYYY | DD Month YYYY | YYYY-MM-DD

3- Countdown functionality: Input in seconds, an event can be binded and called on every second to update the seconds. Countdown usage example:
![image](https://github.com/user-attachments/assets/eac92f8a-e64b-4916-b6d1-94f28bd8cd0f)

All available functions:

Unix Timestamp: returns the seconds since 01/01/1970.

Subtract Dates: returns the seconds of 2 Dates subtraction.

Get Date Time in selected timezone: returns the date and time of the selected timezone.

Format Date: change the formatting of a Date to the selected format available from a list.

Format Seconds: returns the seconds passed in a selected format (HH:MM:SS | HH:MM | MM:SS).

Hours To Seconds: returns the number of seconds in the entered hours number (accept float: 1.5 hour returns 5400).

Get Month Short Name: returns the short name of a month in English based on its number (1 returns Jan).

Get Month Full Name: returns the name of the month in English based on its number (1 returns January).
