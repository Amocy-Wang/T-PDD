








#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U6 {
   const uint32_t  f0;
   const signed f1 : 19;
   const int16_t  f2;
   volatile signed f3 : 31;
   volatile int8_t * const  volatile  f4;
};

/* --- GLOBAL VARIABLES --- */
static union U6 g_2[3][10][7] = {{{{0x70FEEA38L},{0x22452A2CL},{18446744073709551607UL},{7UL},{18446744073709551607UL},{0x22452A2CL},{0x70FEEA38L}},{{0x37A30B91L},{0UL},{18446744073709551612UL},{0x6A218F0EL},{1UL},{1UL},{18446744073709551615UL}},{{7UL},{0x70FEEA38L},{1UL},{1UL},{0x70FEEA38L},{7UL},{0UL}},{{0x582BA8D7L},{18446744073709551614UL},{18446744073709551612UL},{18446744073709551609UL},{18446744073709551615UL},{18446744073709551615UL},{1UL}},{{0x335C22C9L},{3UL},{18446744073709551607UL},{3UL},{0x335C22C9L},{0UL},{0x22452A2CL}},{{18446744073709551612UL},{18446744073709551614UL},{1UL},{0UL},{0UL},{4UL},{0UL}},{{0x021AA291L},{0x70FEEA38L},{0x70FEEA38L},{0x021AA291L},{0x22452A2CL},{0UL},{0x335C22C9L}},{{0UL},{1UL},{0x582BA8D7L},{18446744073709551615UL},{0x84CBED56L},{18446744073709551606UL},{1UL}},{{1UL},{0UL},{1UL},{0UL},{3UL},{0x70FEEA38L},{0x335C22C9L}},{{0x37A30B91L},{0xE9F21C9BL},{18446744073709551615UL},{4UL},{18446744073709551612UL},{4UL},{18446744073709551615UL}}},{{{3UL},{3UL},{0x22452A2CL},{8UL},{18446744073709551607UL},{0x70FEEA38L},{0UL}},{{0UL},{18446744073709551610UL},{0x84CBED56L},{0x0859495EL},{18446744073709551615UL},{18446744073709551606UL},{18446744073709551615UL}},{{0x021AA291L},{18446744073709551615UL},{3UL},{1UL},{18446744073709551607UL},{0UL},{8UL}},{{0x84CBED56L},{18446744073709551609UL},{18446744073709551612UL},{18446744073709551610UL},{18446744073709551612UL},{18446744073709551609UL},{0x84CBED56L}},{{8UL},{0UL},{18446744073709551607UL},{1UL},{3UL},{18446744073709551615UL},{0x021AA291L}},{{18446744073709551615UL},{18446744073709551606UL},{18446744073709551615UL},{0x0859495EL},{0x84CBED56L},{18446744073709551610UL},{0UL}},{{0UL},{0x70FEEA38L},{18446744073709551607UL},{8UL},{0x22452A2CL},{3UL},{3UL}},{{18446744073709551615UL},{4UL},{18446744073709551612UL},{4UL},{18446744073709551615UL},{0xE9F21C9BL},{0x37A30B91L}},{{0x335C22C9L},{0x70FEEA38L},{3UL},{0UL},{1UL},{0UL},{1UL}},{{1UL},{18446744073709551606UL},{0x84CBED56L},{18446744073709551615UL},{0x582BA8D7L},{1UL},{0UL}}},{{{0x335C22C9L},{0UL},{0x22452A2CL},{7UL},{0x021AA291L},{0x021AA291L},{7UL}},{{18446744073709551615UL},{18446744073709551609UL},{18446744073709551615UL},{1UL},{18446744073709551615UL},{0x0859495EL},{0UL}},{{0UL},{18446744073709551615UL},{1UL},{0x22452A2CL},{0x7B6A69EEL},{0x22452A2CL},{1UL}},{{18446744073709551615UL},{18446744073709551610UL},{0x582BA8D7L},{0UL},{2UL},{0x0859495EL},{0x37A30B91L}},{{8UL},{3UL},{0x021AA291L},{0x70FEEA38L},{0x70FEEA38L},{0x021AA291L},{3UL}},{{0x84CBED56L},{0xE9F21C9BL},{18446744073709551615UL},{18446744073709551614UL},{2UL},{1UL},{0UL}},{{0x021AA291L},{0UL},{0x7B6A69EEL},{3UL},{0x7B6A69EEL},{0UL},{0x021AA291L}},{{0UL},{1UL},{2UL},{18446744073709551614UL},{18446744073709551615UL},{0xE9F21C9BL},{0x84CBED56L}},{{3UL},{0x021AA291L},{0x70FEEA38L},{0x70FEEA38L},{0x021AA291L},{3UL},{8UL}},{{0x37A30B91L},{0x0859495EL},{2UL},{0UL},{0x582BA8D7L},{18446744073709551610UL},{18446744073709551615UL}}}};


/* --- FORWARD DECLARATIONS --- */
static union U6  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static union U6  func_1(void)
{ /* block id: 0 */
    return g_2[2][9][1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2[i][j][k].f0, "g_2[i][j][k].f0", print_hash_value);
                transparent_crc(g_2[i][j][k].f1, "g_2[i][j][k].f1", print_hash_value);
                transparent_crc(g_2[i][j][k].f2, "g_2[i][j][k].f2", print_hash_value);
                transparent_crc(g_2[i][j][k].f3, "g_2[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 0
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 1
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

