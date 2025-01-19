#include "atv_2_strings_led_buzzer.h"
#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/watchdog.h"
#include "hardware/structs/psm.h"
#include "pico/bootrom.h"



// Definir pinos dos LEDs e do buzzer
#define LED_RED 13
#define LED_BLUE 12
#define LED_GREEN 11
#define BUZZER 21

// Função para inicializar os pinos
void init_pins() {
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_put(LED_RED, 0);

    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_put(LED_BLUE, 0);

    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_put(LED_GREEN, 0);

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_put(BUZZER, 0);

    // Inicializar a comunicação serial (UART)
    stdio_init_all();
    printf("Sistema inicializado. Pronto para comandos.\n");
}

// Função para executar os comandos
void execute_command(const char *command) {
    if (strcmp(command, "verd") == 0) {
        gpio_put(LED_GREEN, 1);
        gpio_put(LED_BLUE, 0);
        gpio_put(LED_RED, 0);
        printf("LED verde ligado.\n");
    } else if (strcmp(command, "azul") == 0) {
        gpio_put(LED_GREEN, 0);
        gpio_put(LED_BLUE, 1);
        gpio_put(LED_RED, 0);
        printf("LED azul ligado.\n");
    } else if (strcmp(command, "verm") == 0) {
        gpio_put(LED_GREEN, 0);
        gpio_put(LED_BLUE, 0);
        gpio_put(LED_RED, 1);
        printf("LED vermelho ligado.\n");
    } else if (strcmp(command, "todo") == 0) {
        gpio_put(LED_GREEN, 1);
        gpio_put(LED_BLUE, 1);
        gpio_put(LED_RED, 1);
        printf("Todos os LEDs ligados.\n");
    } else if (strcmp(command, "buzz") == 0) {
        gpio_put(BUZZER, 1);
        printf("Buzzer ativado.\n");
        sleep_ms(2000);
        gpio_put(BUZZER, 0);
        printf("Buzzer desativado.\n");
    } else if (strcmp(command, "rebo") == 0) {
        printf("Reiniciando o sistema...\n");
        reset_usb_boot(0, 0);  // Reinicia o sistema
    } else {
        printf("Comando inválido: %s\n", command);
    }
}

// Função principal
int main() {
    init_pins();

    char command[5]; // Buffer para o comando recebido

    while (1) {
        printf("Aguardando comando (verd, azul, verm, todo, buzz, rebo):\n");
        if (fgets(command, sizeof(command), stdin) != NULL) {
            // Remover o caractere de nova linha do comando
            command[strcspn(command, "\n")] = '\0';
            execute_command(command);
        }
        sleep_ms(100);
    }

    return 0;
}