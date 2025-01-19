# Controle de Pinos GPIO - BitDogLab com RP2040

## Descrição

Este repositório contém o código para controlar os pinos GPIO do microcontrolador RP2040 utilizando a ferramenta educacional **BitDogLab**. O projeto envolve o acionamento de um **LED RGB** (GPIOs 11, 12, 13) e o controle de um **buzzer** (GPIO 21) através de comandos via **UART**.

## Integrantes do Grupo

- **José Guilherme Marques**: Responsável revisar o código, aprovar os pull requests e criação do Readme.
- **Lucas Fialho Xavier**: Responsável pela criação do código C e Diagrama Json
- **Otiliano Junior**: Responsável por fazer o vídeo de ensaio.

### Componentes Necessários

- Ferramenta educacional **BitDogLab (versão 6.3)**.
- Cabo **micro-USB para USB-A**.
- Computador pessoal com **VS Code** e configuração de **Pico SDK**.

### Estrutura do Projeto

- **GPIOs 11, 12 e 13** são usados para controlar o LED RGB.
- **GPIO 21** é usado para o buzzer.
- **UART (porta serial)** é usada para comunicação entre o microcontrolador e o computador.

### Funcionalidade

O microcontrolador RP2040 interpreta comandos enviados via UART para realizar ações nos periféricos conectados:

1. **LED RGB**: Os comandos controlam as cores e o brilho do LED RGB.
2. **Buzzer**: O comando aciona ou desliga o buzzer.

### Vídeo de Ensaio

Aqui está o link para o vídeo de ensaio:

[Vídeo de Ensaio](https://link-para-o-video.com)

### Diagramas

- **Figura 1**: Esquema de conexão da ferramenta BitDogLab.
  
  ![Diagrama de Conexões](docs/diagrama.jpg)


### Como Usar

1. **Clone o repositório**:
    ```bash
    git clone https://github.com/guilhermejnr/bitdoglab-gpio-control-rp2040
    ```

2. **Instale as dependências**:
   Siga a documentação do **Pico SDK** para configurar o ambiente de desenvolvimento.

3. **Compile o código**:
    ```bash
    make
    ```

4. **Carregue o código no RP2040**:
    Após compilar, transfira o arquivo gerado para o seu dispositivo RP2040.

5. **Abra um terminal serial**:
    Use um terminal serial (como **PuTTY** ou **Tera Term**) para enviar comandos ao RP2040. Alguns exemplos de comandos:

    - **Comando LED**: `led on` / `led off`
    - **Comando Buzzer**: `buzzer on` / `buzzer off`


### Contribuições

Sinta-se à vontade para contribuir com melhorias neste projeto! Basta fazer um **fork** do repositório, criar uma branch e submeter um **pull request**.
