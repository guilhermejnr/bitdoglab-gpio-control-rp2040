#include "atv_2_strings_led_buzzer.h"

void test_execute_command() {
    printf("Iniciando testes de comandos...\n");

    printf("Teste 1: Comando 'verd'\n");
    execute_command("verd");

    printf("Teste 2: Comando 'azul'\n");
    execute_command("azul");

    printf("Teste 3: Comando 'verm'\n");
    execute_command("verm");

    printf("Teste 4: Comando 'todo'\n");
    execute_command("todo");

    printf("Teste 5: Comando 'buzz'\n");
    execute_command("buzz");

    printf("Teste 6: Comando 'rebo' (reinício do sistema - não executado durante testes).\n");
    // execute_command("rebo");

    // Teste 7: Comando inválido
    printf("Teste 7: Comando inválido\n");
    execute_command("invalido");

    printf("Testes concluídos.\n");
}

int main() {

    printf("Inicializar os pinos antes de executar os testes.\n");
    init_pins();

    test_execute_command();

    return 0;
}