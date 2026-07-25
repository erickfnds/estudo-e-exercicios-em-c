# 💻 Estudos e Exercícios de Programação (C)

Repositório dedicado à prática de lógica de programação, algoritmos e desenvolvimento de pequenos sistemas em C, documentando minha evolução durante o curso de Análise e Desenvolvimento de Sistemas.

---
## 🔐 Projeto em Destaque: Caixa Eletrônico v2 (Com Structs)

- Autenticação e busca de múltiplos usuários via `struct`
- Validação de credenciais com `strcmp()`
- Controle de fluxo completo com `do-while` e `switch-case`
- Validação defensiva para depósitos e saques com verificação de saldo

---
## 📚 Projetos Incluídos

| Projeto | Arquivo | Linguagem | Conceitos Aplicados | Descrição |
| :--- | :--- | :--- | :--- | :--- |
| 🥤 **Depósito de Bebidas** | `primeiro-programa.por` | Portugol | Variáveis, Condicionais (`se`/`senao`), Strings | Primeiro sistema feito: fluxo de atendimento e pagamento. |
| 🍕 **Sistema de Pizzaria** | `sistema-pizzaria.c` | C | Estrutura de Decisão, Formatação de Saída | Menu interativo de pedidos de pizza. |
| 🍽️ **Restaurante** | `sistema-restaurante.c` | C | `switch-case`, `strstr()`, Funções de String | Sistema de refeições com verificação de opções e tamanhos. |
| 🔒 **Sistema de Login** | `sistema-login.c` | C | `while`, `for`, `fgets()`, `strcmp()`, `Sleep()` | Autenticação com validação de credenciais, limite de tentativas e bloqueio temporizado. |
| 🏦 **Caixa Eletrônico v1** | `sistema-caixa.c` | C |  `switch-case`, Validação Defensiva | Simulador bancário básico com conta única (saldo, depósito e saque). |
| 🏦 **Caixa Eletrônico v2** | `Caixa-eletronico.c` | C | `struct`, Vetores de Objetos, `strcmp()`, `do-while` | Evolução do sistema bancário com múltiplos usuários, login e gerenciamento individual de saldo. |

---

## 🛠️ Tecnologias e Ferramentas

* **Linguagens:** C, Portugol
* **Ambiente de Desenvolvimento:** VS Code
* **Controle de Versão:** Git & GitHub

---

## 🎯 Próximos Passos & Evolução
- [x] Implementar laços de repetição (`do-while` / `while`) nos menus para evitar que o programa feche após uma ação.
- [x] Evoluir o sistema de caixa eletrônico utilizando registros (`structs`) para múltiplos usuários.
- [x] Dominar lógica de programação procedural e manipulação de memória básica em C.
- [🚀] **Nova Fase:** Transição para o Desenvolvimento Web (HTML5, CSS3 e JavaScript).

---
## ▶️ Como Executar

Para compilar e rodar qualquer um dos sistemas em C no seu terminal:

```bash
# Exemplo de compilação do Caixa Eletrônico v2:
gcc Caixa-eletronico.c -o caixa

# Executando no Windows:
.\caixa.exe

# Executando no Linux/Mac:
./caixa
