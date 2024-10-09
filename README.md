# DateTimeFunctions-UnrealEnginePlugin
 This is an Unreal Engine plugin that provides some functions related to Date and Time with a countdown functionality using event binding.
Packaged and tested on Unreal Engine 5.2 on windows only but in theory it can be compiled on any other version and for any other platform.

To use it, just download it on your machine as zip file then extract to your project folder: YourProjectFolder -> Plugins (if this folder doesn't exist you can create it).

Features:

1- DateTime operations: Unix Timestamp, Subtract Dates (Result in seconds), Get time in a selected timezone.

2- DateTime Formating: Format any date to a selected formt. Available formats are: DD/MM/YYYY | MM/DD/YYYY | Mon,DD YYYY | DD Mon YYYY | DD Month YYYY | YYYY-MM-DD

3- Countdown functionality: Input in seconds, an event can be binded and called on every second to update the seconds.
