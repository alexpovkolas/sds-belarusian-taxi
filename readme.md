Problem Belarusian Taxi
Input file name: taxi.in
Output file name: taxi.out
Time limit: 1 s
Memory limit: 512 MB


Number plates used for taxi vehicles in the Republic of Belarus have the following format:

region code (a digit from 1 to 7);
three uppercase Latin letters. For the ‘7’ region (Minsk), the combinations TAX, TBX, TEX are used, for other regions, only TAX, TBX are currently in use;
a single space;
four-digit number from 1 to 9999, with leading zeroes.

Automatic recognition camera installed over the motorway has read number plates of n vehicles. Determine how many numbers match the format used by Belarusian taxis.

Input

The first line of input contains the integer n (1 ≤ n ≤ 100 000). Then, n lines containing the recorded numbers follow. The length of each line is between 3 and 20 characters, it may contain digits, uppercase and lowercase Latin letters, hyphen-minus characters and spaces. Note that all spaces do matter, i. e. if a line has leading or trailing spaces, it may not be a valid taxi number.
Output

Print the number of lines that comply with the rules described above.
Example


taxi.in	
9
7TAX 9215
6TEX 9125
a236ye 73
21-14 BOT
3412 0321 GR
1TBX 0021-7
2-TBX 0001
1TBX 0000
1TBX 0020

taxi.out
2