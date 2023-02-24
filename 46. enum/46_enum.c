#include <stdio.h>

/**
 * @brief kegunaan enum agar code kita mudah di baca, value nya merefleksikan sesuatu
 * @note enum jg bersifat constant
 */


// isi dari enum "Day" ini berupa integer berurutan seperti index tapi bukan
// kita bisa mengisi nilainya sendiri seperti yg "Friday"
enum Day {Monday, Tuesday, Wednesday, Thursday, Friday = 30, Saturday, Sunday};

// membuat enum dg typedef
// Pencetan menjadi sinonim "enum button"
typedef enum button{ON, OFF} Pencetan;

// make function using enum
Pencetan press(Pencetan current_pencetan);
void print_status_pencetan(Pencetan current_pencetan);

int main(int argc, char const *argv[])
{
    // kita kaya bikin tipe daya sendiri dari enum ini
    enum Day today = Tuesday;
    enum Day yesterday = Monday;
    enum Day tomorrow = Wednesday;


    printf("Yesterday: %d\n", yesterday);
    printf("Today: %d\n", today);
    printf("Tomorrow: %d\n", tomorrow);

    printf("Friday: %d\n\n", Friday);

    // ===============Fungsi menggunkan enum===============
    printf("===============Fungsi menggunkan enum===============\n");
    Pencetan power = ON;
    // printf("power: %d\n", power);

    print_status_pencetan(power);
    power = press(power);
    print_status_pencetan(power);
    power = press(power);
    power = press(power);
    print_status_pencetan(power);
    // ====================================================
    
    return 0;
}

Pencetan press(Pencetan current_pencetan)
{
    if (current_pencetan == ON) return OFF;
    else if (current_pencetan == OFF) return ON;    
}

void print_status_pencetan(Pencetan current_pencetan)
{
    if(current_pencetan == ON ) printf("ON\n");
    else if(current_pencetan == OFF ) printf("OFF\n");
}