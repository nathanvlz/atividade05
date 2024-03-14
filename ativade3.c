#1
#include <stdio.h>

int main() {
    int contador = 0;
    int nota;

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &nota);

        if (nota >= 7) {
            contador++;
        }
    }

    printf("Quantidade de alunos aprovados: %d\n", contador);

    return 0;
}

#2
#include <stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}

#3
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Divisores de %d: ", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
#4
#include <stdio.h>

int main() {
    float altura, media, soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);
        soma += altura;
    }

    media = soma / 5;

    printf("A média de altura é: %.2f metros\n", media);

    return 0;
}
#5
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
#6
#include <stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            soma += digito;
        }
        numero /= 10;
    }

    printf("A soma dos dígitos pares é: %d\n", soma);

    return 0;
}
#07
#include <stdio.h>

int main() {
    int numero, invertido = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Número invertido: %d\n", invertido);

    return 0;
}
#08
#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;

    while (numero <= 100) {
        soma += numero;
        numero++;
    }

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}
#09
#include <stdio.h>

int main() {
    int numero = 1;
    int produto = 1;

    while (numero <= 5) {
        produto *= numero;
        numero++;
    }

    printf("O produto dos números de 1 a 5 é: %d\n", produto);

    return 0;
}
#10
#include <stdio.h>

int main() {
    int multiplicador = 1;

    while (multiplicador <= 10) {
        printf("9 x %d = %d\n", multiplicador, 9 * multiplicador);
        multiplicador++;
    }

    return 0;
}
#11
#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite uma sequência de números (encerre com 0):\n");
    
    // Inicializa maior e menor com o primeiro número digitado
    scanf("%d", &numero);
    maior = menor = numero;

    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        scanf("%d", &numero);
    }

    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d\n", menor);

    return 0;
}
#12
#include <stdio.h>

int main() {
    int numero, contador = 0;
    float soma = 0;

    printf("Digite uma sequência de números (encerre com -1):\n");

    while (numero != -1) {
        scanf("%d", &numero);

        if (numero != -1) {
            soma += numero;
            contador++;
        }
        

    }

    // Evita a divisão por zero se o usuário não inserir nenhum número
    if (contador > 0) {
        float media = soma / contador;
        printf("A média dos números digitados é: %.2f\n", media);
    } else {
        printf("Nenhum número foi inserido.\n");
    }

    return 0;
}

#13
#include <stdio.h>
#include <math.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        soma += pow(digito, 3);
        numero /= 10;
    }

    printf("A soma dos dígitos elevados ao cubo é: %d\n", soma);

    return 0;
}
#14
#include <stdio.h>

int main() {
    int numero = 1;

    while (numero <= 100) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    printf("\n");

    return 0;
}

#15
#include <stdio.h>

int main() {
    int numero = 1;

    while (numero <= 50) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    printf("\n");

    return 0;
}

#16
#include <stdio.h>

int main() {
    int contador = 0;
    int nota;
    int i = 0;

    while (i < 5) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &nota);

        if (nota >= 7) {
            contador++;
        }

        i++;
    }

    printf("Quantidade de alunos aprovados: %d\n", contador);

    return 0;
}
#17
#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else if (numero != 0) {
            impares++;
        }
    }

    printf("Quantidade de números pares antes do primeiro ímpar: %d\n", pares);

    return 0;
}
#18
#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else if (numero != 0) {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
#19
#include <stdio.h>

int main() {
    int numero, div2 = 0, div3 = 0, div5 = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            div2++;
        }

        if (numero % 3 == 0) {
            div3++;
        }

        if (numero % 5 == 0) {
            div5++;
        }
    }

    printf("Quantidade de números divisíveis por 2: %d\n", div2);
    printf("Quantidade de números divisíveis por 3: %d\n", div3);
    printf("Quantidade de números divisíveis por 5: %d\n", div5);

    return 0;
}
#20
#include <stdio.h>

int main() {
    int numero, soma = 0, div3 = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero % 3 == 0) {
            soma += numero;
            div3++;
        }
    }

    if (div3 > 0) {
        float media = (float)soma / div3;
        printf("A média dos números divisíveis por 3 é: %.2f\n", media);
            } else {
        printf("Nenhum número divisível por 3 foi inserido.\n");
    }

    return 0;
}
#21
#include <stdio.h>

int main() {
    int numero, maisDeTresDigitos = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero != 0 && numero >= 1000) {
            maisDeTresDigitos++;
        }
    }

    printf("Quantidade de números com mais de três dígitos: %d\n", maisDeTresDigitos);

    return 0;
}
#22 
#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero != 0 && numero >= 50 && numero <= 100) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("A média dos números entre 50 e 100 é: %.2f\n", media);
    } else {
        printf("Nenhum número entre 50 e 100 foi inserido.\n");
    }

    return 0;
}
#23
#include <stdio.h>

int main() {
    int numero, menorPositivoImpar = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero > 0 && numero % 2 != 0) {
            if (menorPositivoImpar == 0 || numero < menorPositivoImpar) {
                menorPositivoImpar = numero;
            }
        }
    }

    if (menorPositivoImpar > 0) {
        printf("O menor valor positivo e ímpar é: %d\n", menorPositivoImpar);
    } else {
        printf("Nenhum número positivo e ímpar foi inserido.\n");
    }

    return 0;
}
#24
#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0, primeiroNumero = 0, ultimoNumero = 0;

    printf("Digite uma sequência de números (encerre com 0):\n");

    while (numero != 0) {
        scanf("%d", &numero);

        if (numero != 0) {
            if (primeiroNumero == 0) {
                primeiroNumero = numero;
            }

            ultimoNumero = numero;

            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    printf("Quantidade de números pares entre %d e %d: %d\n", primeiroNumero, ultimoNumero, pares);
    printf("Quantidade de números ímpares entre %d e %d: %d\n", primeiroNumero, ultimoNumero, impares);

    return 0;
}
#25
#include <stdio.h>

int main() {
    int numero = 1;
    int multiplosDe3 = 0;

    while (numero <= 50) {
        if (numero % 3 == 0) {
            multiplosDe3++;
        }
        numero++;
    }

    printf("Quantidade de múltiplos de 3 no intervalo de 1 a 50: %d\n", multiplosDe3);

    return 0;
}