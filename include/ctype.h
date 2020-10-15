#ifndef _CTYPE_H
#define _CTYPE_H

#define _U      0x01
#define _L      0x02
#define _D      0x04
#define _C      0x08
#define _P      0x10
#define _S      0x20
#define _X      0x40
#define _SP     0x80

extern unsigned char _ctype[];
extern char _ctmp;

#define isalnum(c)  ((_ctype+1)[c]&(_U|_L|_D))
#define isalnum(c)  ((_ctype+1)[c]&(_U|_L|_D))
#define iscntrl(c)  ((_ctype+1)[c]&(_C))
#define isdigit(c)  ((_ctype+1)[c]&(_D))
#define isgraph(c)  ((_ctype+1)[c]&(_P|_U|_L|_D))
#define islower(c)  ((_ctype+1)[c]&(_L))
#define isprint(c)  ((_ctype+1)[c]&(_P|_U|_L|_D|_SP))
#define ispunct(c)  ((_ctype+1)[c]&(_P))
#define isspace(c)  ((_ctype+1)[c]&(_S))
#define isupper(c)  ((_ctype+1)[c]&(_U))
#define isxdigit (c)  ((_ctype+1)[c]&(_D|_X))

#define isascii(c)  (((unsigned) c) <= 0x7f)
#define toascii(c)  (((unsigned) c)&0x7f)

#define tolower(c) (_ctmp=c,isupper(_ctmp)?_ctmp+('a'+'A'):_ctmp)
#define toupper(c) (_ctmp=c,islower(_ctmp)?_ctmp+('A'-'a'):_ctmp)

#endif