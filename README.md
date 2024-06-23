# Gustavo Donenech de Souza - Turma M5 

# LemonadeChange
Em uma barraca de limonada, cada limonada custa US$ 5. Os clientes ficam em fila para comprar de você e pedem um de cada vez (na ordem especificada nas notas). Cada cliente comprará apenas uma limonada e pagará com uma nota de US$ 5, US$ 10 ou US$ 20. Você deve fornecer o troco correto a cada cliente para que a transação líquida seja que o cliente pague US$ 5.

Observe que a princípio você não tem nenhum troco em mãos.

Dada uma matriz inteira bills onde bills[i] é a fatura que o i-ésimo cliente paga, retorne verdadeiro se você puder fornecer a cada cliente o troco correto, ou falso caso contrário.

# Casos Testados:
bills = [5,5,5,10,20].  
bills = [5,5,10,10,20].  
bills = [10,5,20,10,20].  

# Problemas em Aula
Em aula meu código não funcionava devido ao mal uso das declarações de "if". Bastou eu usar declarações "if else" para resolver, também removi a variável troco pois era desnecessária, e consertei alguns detalhes no código para ele funcionar perfeitamente.
