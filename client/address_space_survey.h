#include <syscall.h>
#include <sys/types.h>
void address_space_survey(int first, int last, int *result) {
    syscall(351, first, last, result);
}
