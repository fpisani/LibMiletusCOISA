#include <libMiletusCoisa/libMiletus.h>
int main(int argc, char *argv[])
{
    ThingMonitor* thingmonitor = new ThingMonitor();
    thingmonitor->ExecuteStep(); //target call
    return 0;
}