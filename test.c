#include "atv_2_strings_led_buzzer.h"

// Função para testar o comportamento da função 'execute_command' com diferentes comandos
// Cada comando simula uma ação específica (ex.: 'verd' para LED verde, 'buzz' para buzzer).
void test_execute_command() {
    printf("Iniciando testes de comandos...\n");

    // Teste do comando que ativa o LED verde
    printf("Teste 1: Comando 'verd'\n");
    execute_command("verd");

    // Teste do comando que ativa o LED azul
    printf("Teste 2: Comando 'azul'\n");
    execute_command("azul");

    // Teste do comando que ativa o LED vermelho
    printf("Teste 3: Comando 'verm'\n");
    execute_command("verm");

    // Teste do comando que ativa todos os LEDs
    printf("Teste 4: Comando 'todo'\n");
    execute_command("todo");

    // Teste do comando que aciona o buzzer
    printf("Teste 5: Comando 'buzz'\n");
    execute_command("buzz");

    // Teste do comando de reinício do sistema (não executado durante testes, por segurança)
    printf("Teste 6: Comando 'rebo' (reinício do sistema - não executado durante testes).\n");
    // execute_command("rebo");

    // Teste de comando inválido para verificar a robustez da função contra entradas desconhecidas
    printf("Teste 7: Comando inválido\n");
    execute_command("invalido");

    printf("Testes concluídos.\n");
}

int main() {

    // Aviso ao usuário que os pinos devem ser inicializados antes de executar os testes
    printf("Inicializar os pinos antes de executar os testes.\n");
    init_pins();

    // Chamada à função que realiza todos os testes
    test_execute_command();

    return 0;
}
