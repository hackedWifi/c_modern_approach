/* Starting with the 386 processor, x86 CPUs have 32-bit registers named EAX,
 * EBX, ECX, EDX. The second half (the least significant bits) of this regis-
 * ters is the same as AX, BX, CX, and DX, respectively. Modify the regs union
 * so that in includes these registers as well as the older ones. Your union
 * should be set up so that modifying EAX changes AX and modifying AX changes
 * the second half of EAX. (The other new registers will work in a similar fa-
 * shion.) You'll need to add some "dummy" members to the word and byte struc-
 * tures, corresponding to the other half EAX, EBX, ECX, and EDX. Declare the
 * type of the new registers to be DWORD (double word), which should be defi-
 * ned as unsigned long. Don't forget that the x86 is little-endian.
 *
 */

typedef unsigned char BYTE;
typedef unsigned long DWORD;
typedef unsigned short WORD;

union {
 struct {
   DWORD eax, ebx, ecx, edx;
 } dword;

 struct { WORD ax, bx, cx, dx, 
               axh, bxh, cxh, dxh;
   
 } word;
 struct { BYTE axl, axh, bxl, bxh, 
               cxl, cxh, dxl, dxh,
               axhl, axhh, bxhl, bxhh, 
               cxhl, cxhh, dxhl, dxhh;
 } byte;

} regs;
