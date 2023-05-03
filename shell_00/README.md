<h1 align="center">
<img src="https://nadei.42sp.org.br/img/InsigneaP3.png" width= "100px">
Lista Shell 00 - C Piscine @42
</h1>

**Conteúdo:**

- *Ex 00* - **z =>** Arquivo com a letra Z. Criado usando o comando `cat` ou `touch` e `vim z` (para editar pelo vim e inserir a letra dentro) ou `cat > z + enter + Z + enter + (ctrl + d)` (para inserir a letra diretamente na criação do arquivo).
- *Ex 01* - **testShell00.tar =>** Arquivo para aprender o comando `ls -l` e alterações de permissão, tamanho do arquivo e data de modificação. <br>
**Comandos utilizados:** <br>
`chmod <código de permissão, pesquisar chmod table> <nome_arquivo>` -> Esse código altera as permissões de usuário. <br>
`truncate -s <tamanho_arquivo> <nome_arquivo>` -> Esse comando altera o tamanho do arquivo. <br>
`touch -t <data> <nome_arquivo>` -> Esse comando altera a data de modificação do arquivo. Obs: Último comando a ser realizado porque a data é alterada automaticamente a cada alteração.<br>
`tar -xf <nome_arquivo>` -> comando para descompactar pelo terminal sem alteração de data de modificação.
- *Ex 02* - **exo2.tar =>** Arquivo para aprender o comando `ls -l` e alterações de permissão, tamanho do arquivo, data de modificação, hard link e symbolic link. <br>
**Comandos utilizados:** <br>
`chmod <código de permissão, pesquisar chmod table> <nome_arquivo>` -> Esse comando altera as permissões de usuário. <br>
`truncate -s <tamanho_arquivo> <nome_arquivo>` -> Esse comando altera o tamanho do arquivo. <br>
`ln -s <arquivo_original> <link_para_arquivo>` -> Esse comando cria um symbolic link. <br>
`ln <arquivo_original> <link_para_arquivo>` -> Esse comando cria um hard link. <br>
`touch -t <data> <nome_arquivo>` -> Esse comando altera a data de modificação do arquivo. Obs: Último comando a ser realizado porque a data é alterada automaticamente a cada alteração. Para alterar a data de arquivos simbólicos, acrescentar o comando `-h`.<br>
`tar -xf <nome_arquivo>` -> comando para descompactar pelo terminal sem alteração de data de modificação.
- *Ex 03* - **id_rsa_pub =>** Chave rsa pública, é o código maior. Dá pra pegar entrando na pasta .ssh arquivo rsa_pub.
- *Ex 04* - **midLS =>** Comando para mostrar a lista de arquivos dentro de um diretório por: <br>
`-t`: ordenado por tamanho. <br>
`-p`: separado por barra. <br>
`-m`: separado por vírgula. <br>
- *Ex 05* - **git_commit.sh =>** Script que mostra a lista dos últimos 5 commits.
- *Ex 06* - **git_ignore.sh =>** Script que mostra os arquivos ignorados pelo arquivo .gitignore.
- *Ex 07* - **b =>** Precisa ser feito usando diff e path. Recursos no material complementar. Objetivo, gerar o arquivo b a partir das diferenças do arquivo a e sw.
- *Ex 08* - **clean =>** Comando que encontra os arquivos com '#' e '~', imprimam no terminal os arquivos encontrados e depois deletam. Precisa ser feito isso nas pastas e subpastas.<br>
**Comandos:**<br>
`-type`: tipo da busca.<br>
`f`: file, arquivo.<br>
`-name`: filtrando por nome.<br>
`print`: imprime no terminal.<br>
`delete`: deleta o arquivo achado ao final da busca.<br>
`-o`: outro, serve pra dizer que você vai colocar outro parâmetro.
- *Ex 09* - **ft_magic** Arquivo magic, temporário. Se reconhece pelos parâmetros passados.<br>
**Sintaxe:** `41       string    42      42 File` <br>
1° Parâmetro: *Byte offset*<br>
2° Parâmetro: *tipagem*<br>
3° Parâmetro: *valor*<br>
4° Parâmetro: *string a ser impressa*<br>
Para testar utilize o comando: <br>
`file -s <nome_arquivo> *`