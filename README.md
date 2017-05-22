# GerarIntancias
Gerador Aleatório de Grafos 

Gerador de instâncias para o problema de Árvore Geradora Mínima com restrição de Grau Mínimo com Centrais e Terminais Fixos.

De modo que as instâncias são grafos completos com n vértices. Os vértices correspondem a pontos gerados aleatoriamente no plano euclidiano dentro de um retângulo de dimensões 480x640 e o custo de cada aresta (u,v) é dado pela distância euclidiana entre os pontos u e v. Além disso, pode se alterar os parâmetros de entrada, tais como o número de vértices, o número de centrais e o grau para cada vértice central.

O saída segue o seguinte formato:

O nome da instância é table_n_c.txt tal que n é a quantidade vétices e c é a quantidade centrais da instância.

Primeira linha temos: n nc m
onde n é a quantidade de vértices total, nc a quantidade de centrais e m a quantidade de arestas.

As próximas nc linhas temos: i d
onde i o vértice central e d o grau mínimo dele.

As próximas m (arestas) linhas temos: i j c
onde i e j representa a aresta do vértice i para o vértice j e c o custo.
