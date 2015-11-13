# libconio-devc
Este repositório contém os arquivos necessários para se utilizar a biblioteca conio2.h e conio.c no compilador Dev-C++.

==========================================
TUTORIAL DE INSTALAÇÃO BIBLIOTECA CONIO NO DEV-C++

1º. Extraia todo o conteúdo do arquivo compactado (.ZIP) em um diretório.

2º. Copie os diretórios "include" e "lib" dos arquivos descompactados; e cole-os na pasta C:\Program Files (x86)\Dev-Cpp\MinGW64  

3º. Pronto! Utilize o código do arquivo "cores_exemplo.c" para testar a instalação.



OBSERVAÇÃO IMPORTANTE: Para executar o 2º passo é necessário ter permissão de administrador para alterar o conteúdo 
do diretório "C:\Program Files (x86)\Dev-Cpp\MinGW64". Não havendo permissão de administrador, é possível configurar 
o Dev-C++ para reconhecer os diretórios de biblioteca (lib) e inclusão de cabeçalhos e fontes (include) através do seguintes passos:
a. Clique em Ferramentas -> Opções do Compilador

b. Clique na guia "Diretórios"

c. Clique na guia "Bibliotecas", logo abaixo de Diretórios.

d. Clique no ícone de uma pasta (localizado na parte inferior (mais à direita) da tela). Selecione o diretório "lib" que acabamos de descompactar, e clique em "Ok".
Em seguida, clique no botão "Adicionar" (para incluir este diretório na lista de pastas que contém bibliotecas do compilador).

e. Clique na guia "C Includes", ao lado da guia Bibliotecas.

f. Clique no ícone de uma pasta (localizado na parte inferior (mais à direita) da tela). Selecione o diretório "include" que acabamos de descompactar, e clique em "Ok".
Em seguida, clique no botão "Adicionar" (para incluir este diretório na lista de pastas que contém cabeçalhos do compilador).

g. Clique no botão "Ok" para fechar a janela "Opções do Compilador".

h. Pronto! Utilize o código do arquivo "cores_exemplo.c" para testar a instalação.


==========================================
Créditos:
Prof. Daniel Cosme Mendonça Maia
Instituto Federal do Norte de Minas Gerais - IFNMG - Campus Pirapora

Email: daniel.maia[at]ifnmg.edu.br

Notas:
* Estes mesmos arquivos poderão ser utilizados no Code::Blocks para instalação da biblioteca conio. No entanto, sua instalação deve seguir passos específicos
para este compilador.

* A referência para o diretório "C:\Program Files (x86)\Dev-Cpp\MinGW64" pode alterar de acordo com o diretório utilizado para instalação do DEV-C++.

