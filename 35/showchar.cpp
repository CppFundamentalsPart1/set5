#include "main.ih"

void showChar(char ch)
{
    cout << "char ";

    switch (ch)
    {
        case '\t':
            cout << "'\\t'";
            break;
        case '\n':
            cout << "'\\n'";
            break;
        case ' ':
            cout << "' '";
            break;
        default:
            if (isprint(ch))
                cout << '\'' << ch << '\'';
            else
                cout << static_cast<size_t>(static_cast<unsigned char>(ch));
            break;
    }
}