
#include <glib.h>
#include "boy.h"

int main(int argc, char *argv[])
{
    Boy *tom;
    g_type_init();//注意，初始化类型系统，必需
    g_print("**********************\n");
    tom = boy_new_with_name("Tom");
    tom->cry();
    boy_info(tom);
    BoyClass* bc = BOY_SESSION_GET_CLASS(tom);
    bc->boy_born();
    if (BOY_IS_SESSION_CLASS(bc))
    {
        g_print("yes!!");
    }
    return TRUE;
}
