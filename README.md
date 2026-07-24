# 💻 Estudos e Exercícios de Programação (C)

Repositório dedicado à prática de lógica de programação, algoritmos e desenvolvimento de pequenos sistemas em C documentando minha evolução durante o curso de Análise e Desenvolvimento de Sistemas.

---
## 🔐 Projeto em Destaque: Sistema de Login 

- Validação de email, usuário e senha
- Limite de tentativas
- Bloqueio temporário com `Sleep()`
- Uso de `while` e `for` para controle de fluxo

---
## 📚 Projetos Incluídos

| Projeto | Arquivo | Linguagem | Conceitos Aplicados | Descrição |
| :--- | :--- | :--- | :--- | :--- |
| 🥤 **Depósito de Bebidas** | `primeiro-programa.por` | Portugol | Variáveis, Condicionais (`se`/`senao`), Strings | Primeiro sistema feito: fluxo de atendimento e pagamento. |
| 🍕 **Sistema de Pizzaria** | `sistema-pizzaria.c` | C | Estrutura de Decisão, Formatação de Saída | Menu interativo de pedidos de pizza. |
| 🍽️ **Restaurante** | `sistema-restaurante.c` | C | `switch-case`, `strstr()`, Funções de String | Sistema de refeições com verificação de opções e tamanhos. |
| 🔒 **Sistema de Login** | `sistema-login.c` | C | `while`, `for`, `fgets()`, `strcmp()`, `Sleep()` | Autenticação com validação de credenciais, limite de tentativas e bloqueio temporizado. |
| 🏦 **Caixa Eletrônico** | `sistema-caixa.c` | C | `do-while`, `switch-case`, Validação Defensiva (`if`/`else`) | Simulador bancário com consulta de saldo, depósito e saque com trava de segurança. |

---

## 🛠️ Tecnologias e Ferramentas

* **Linguagens:** C, Portugol
* **Ambiente de Desenvolvimento:** VS Code
* **Controle de Versão:** Git & GitHub

---

## 🎯 Próximos Passos
- [x] Implementar laços de repetição (`do-while` / `while`) nos menus para evitar que o programa feche após uma ação.
- [ ] Criar novos projetos em C explorando vetores (`arrays`) e matrizes.
- [ ] Refatorar os códigos organizando a lógica em funções separadas.

---
## ▶️ Como executar (exemplo com caixa eletrônico)

Compile:

gcc sistema-caixa.c -o caixa

Execute:

./caixa
