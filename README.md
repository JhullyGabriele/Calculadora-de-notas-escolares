# Calculadora-de-notas-escolares
Calculadora de notas escolares em C.

Uma calculadora que informa quantos alunos foram aprovados na cadeira, considerando-se o modelo de avaliação usado no Cobalto, onde o aluno apenas será aprovado ao obter média 7 entre as duas avaliações.
O diferencial dessa calculadora é que ela permite que insira o número de alunos que quiser até que informe um número negativo, o que para a inserção de dados. Para conseguir isso, eu precisei criar uma realocação de memória, que funciona adicionando um novo espaço à variável enquanto os dados são inseridos. Normalmente, o número de dados que será inserido é informado anteriormente, já que por padrão as variáveis comportam números finitos de dados, que devem ser definidos previamente.