/**
 * Л/р 4 Циклы
*/
//extern "C" {
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    system("chcp 1251 > nul");

    int ret = EXIT_SUCCESS;
    if (!printf("Открытие первого ресурса\n"))
    {
        fprintf(stderr, "Ошибка: невозможно открыть первый ресурс\n");
        ret = EXIT_FAILURE;
        goto exit;
    }
    if (!printf("Открытие второго ресурса\n"))
    {
        fprintf(stderr, "Ошибка: невозможно открыть второй ресурс\n");
        ret = EXIT_FAILURE;
        goto cleanup_resource1;
    }

    // ...

cleanup_resource2:
    printf("Закрытие второго ресурса\n");
cleanup_resource1:
    printf("закрытие первого ресурса\n");
exit:
    return ret;
}
//}
