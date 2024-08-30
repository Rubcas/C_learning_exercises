// Yet another well adjusted printing principle
// This uses an escape sequence in the string itself
/* Other common escape sequences
\n new line cursor to go to next line
\t horizontal tab cursor to skip over
\a alarm computer beep
\b backspace cursor to back up, or move left
\r return cursor to go to the beginning of current line
\\ backslash print
\' single quote print
\" double quote print
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "The following items were top sellers\n";
    cout << "during the month of June\n";
    cout << "Computer games\n";
    cout << "Aspirin\n";
    return 0;
}