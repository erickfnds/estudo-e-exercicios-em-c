
/*
 * Primeiro codigo, sistema de um deposito de bebidas
 * linguagem: Portugol
 * Data de criação: 16/07/2026
 */








programa 
{
	inclua biblioteca Tipos --> tp
	inclua biblioteca Texto --> txt
	funcao inicio()
	{
		const real c = 9.00, v = 262.00, vk = 30.00, en = 10.00, w = 130.00
		
	
		
		
		
		
		
		
		inteiro quantidade
		real troco, valor_pago
		cadeia catalogo, valor, escolhab, formapagamento, sema, senha
		real valor_final = 0.00
		
		escreva(" Bem vindo ao deposito de bebidas Shopperia :D, oque voce deseja ?  ")
		leia(catalogo)

		se(txt.posicao_texto("tem" ,catalogo, 0) != -1 ou txt.posicao_texto("catalogo" ,catalogo, 0) != -1)
		{
			escreva(" temos: cerveja lata , garrafa de vinho, vodka, energetico 2L e whisky  ")
			}
		escreva("\n")
			escreva("\n")
			escreva(" voce quer saber o preço das bebidas ?  ")
			leia(valor)
			escreva("\n")
			escreva("\n")
			se(txt.posicao_texto("sim", valor, 0) != -1 ou txt.posicao_texto("quero", valor, 0) != -1)
			{
				escreva("cerveja R$6,00 \n vinho R$262,00 \n vodka R$30,00, \n energetico R$10 \n whisky R$130 ")
				
			}
				escreva("\n o que voce vai querer ? " )
				leia(escolhab)

				se(txt.posicao_texto("cerveja", escolhab, 0) != -1)
				{
					escreva("\n quantas voce vai querer ? ")
					leia(quantidade)
					valor_final = c * quantidade
					escreva("\n o valor total deu R$  ", valor_final)
					
					}

					senao se(txt.posicao_texto("vinho", escolhab, 0) != -1)
				{
					escreva("\n quantas voce vai querer ? ")
					leia(quantidade)
					valor_final = v * quantidade
					escreva("\n o valor total deu R$  ", valor_final)
					
					}
					senao se(txt.posicao_texto("vodka", escolhab, 0) != -1)
				{
					escreva("\n quantas voce vai querer ? ")
					leia(quantidade)
					valor_final = vk * quantidade
					escreva("\n o valor total deu R$  ", valor_final)
					
					}

					senao se(txt.posicao_texto("energetico", escolhab, 0) != -1)
				{
					escreva("\n quantos voce vai querer ? ")
					leia(quantidade)
					valor_final = en * quantidade
					escreva("\n o valor total deu R$  ", valor_final)
					
					}
					senao se(txt.posicao_texto("whisky", escolhab, 0) != -1)
				{
					escreva("\n quantas voce vai querer ? ")
					leia(quantidade)
					valor_final = w * quantidade
					escreva("\n o valor total deu R$  ", valor_final)
					
					}
					
					escreva("\n qual vai ser forma de pagamento ? dinheiro ou cartao ? " )
					leia(formapagamento)

					se(txt.posicao_texto("dinheiro", formapagamento,0) != -1)
					
					{
						escreva("\nquanto de dinheiro ? ")
						leia(valor_pago)
						troco = valor_pago - valor_final
						escreva("\nAqui esta seu troco ", troco)
						

					
						
						
						}
					
					senao se(txt.posicao_texto("cartao", formapagamento,0)!= -1 )
					{
						escreva("\n tem aproximação ? ")
						leia(sema)
						
						se (txt.posicao_texto("sim", sema, 0) != -1) 
    {
        						
						escreva("\n\nBIP")
					escreva("\n\n foi, quer sua via ?\n ")}


senao se (txt.posicao_texto("nao", sema,0)!= -1 )
escreva(" Digite a senha de 4 numeros na maquinha, por favor ")
leia(senha)
           se (txt.numero_caracteres(senha) == 4 e tp.cadeia_e_inteiro(senha, 10))
    {
        escreva("\n Senha correta! Processando...")

        escreva("\n\nBIP")

					escreva("\n\n foi, quer sua via ?\n ")
    }
					
					}
	}	
	
	}
