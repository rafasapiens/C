/* Programa criado pelo Bing com o prompt:
 * crie um programa em c que faça reboot na máquina após um timer
 foi compilado renomeado como "adeus"
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
    // Define o tempo em segundos para o timer
    int tempo = 10;
    // Cria uma variável para armazenar o tempo atual
    time_t agora;
    // Cria uma variável para armazenar o tempo final
    time_t fim;
    // Obtém o tempo atual e adiciona o tempo do timer
    time(&agora);
    fim = agora + tempo;
    // Exibe uma mensagem informando o tempo restante
    printf("O programa irá reiniciar a máquina em %d segundos.\n", tempo);
    // Entra em um loop até que o tempo final seja atingido
    while (agora < fim) {
        // Dorme por um segundo
        sleep(1);
        // Atualiza o tempo atual
        time(&agora);
    }
    // Exibe uma mensagem informando que o reboot será iniciado
    printf("Iniciando o reboot...\n");
    // Executa o comando de reboot usando a função system
    system("reboot");
    return 0;
}

