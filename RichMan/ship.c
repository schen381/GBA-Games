//Shizhe Chen
const unsigned short ship[500] =
{
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07bde, 0x00842, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07bde, 0x07fff, 0x00421, 0x00421, 0x00000, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x00421, 0x00000, 0x07fff, 0x02529, 
0x00000, 0x00842, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07bde, 0x07bde, 
0x06b5a, 0x00000, 0x00421, 0x05294, 0x00421, 0x00421, 0x04631, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x00842, 0x00842, 0x018c6, 0x00421, 0x00421, 0x00000, 0x00421, 
0x00842, 0x00842, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x05ef7, 0x07fff, 
0x00000, 0x00000, 0x00421, 0x00421, 0x00421, 0x01084, 0x05294, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07bde, 0x00000, 0x00842, 0x00421, 0x00421, 0x00421, 0x01084, 0x035ad, 
0x00000, 0x00000, 0x06739, 0x07bde, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x04210, 0x02108, 0x07fff, 
0x06b5a, 0x00c63, 0x00842, 0x00421, 0x00842, 0x00421, 0x00421, 0x0294a, 0x00000, 0x077bd, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x04631, 0x04210, 0x00000, 0x00000, 0x00842, 0x00c63, 0x039ce, 0x07fff, 
0x07fff, 0x00c63, 0x00421, 0x01084, 0x00421, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x018c6, 0x00421, 0x00421, 
0x00421, 0x00421, 0x00421, 0x00421, 0x00842, 0x00000, 0x00842, 0x00421, 0x00421, 0x077bd, 
0x0294a, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07bde, 0x07bde, 0x00842, 0x06318, 0x00421, 0x00421, 0x00421, 0x00421, 0x00421, 
0x00421, 0x00421, 0x00842, 0x0294a, 0x05294, 0x077bd, 0x077bd, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07bde, 0x014a5, 0x07fff, 
0x00c63, 0x00421, 0x014a5, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x06b5a, 0x00000, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x00421, 0x00842, 0x00842, 0x00421, 0x00842, 0x00000, 0x00421, 0x00842, 0x00842, 
0x00421, 0x00421, 0x00000, 0x04210, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x00842, 0x00421, 0x00421, 0x00421, 0x00421, 
0x00421, 0x00421, 0x00421, 0x00421, 0x00421, 0x00421, 0x00421, 0x00000, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x0294a, 0x0294a, 0x02529, 0x02108, 0x02108, 0x01ce7, 0x01ce7, 0x018c6, 
0x014a5, 0x014a5, 0x07bde, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x077bd, 0x077bd, 0x077bd, 
0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x07bde, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x077bd, 0x077bd, 0x07bde, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 
0x077bd, 0x077bd, 0x077bd, 0x07bde, 0x07bde, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07bde, 0x077bd, 0x077bd, 0x077bd, 0x077bd, 0x07bde, 0x07fff, 0x07bde, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 
0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff, 0x07fff,
};