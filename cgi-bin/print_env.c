#include <stdio.h>


int main(int argc, char *argv[], char *envp[])
{
	int i = 0;
	
	// while (envp[i])
	// 	printf("%s\n", envp[i++]);
	printf(
	'<html lang="en">
		<head>
			<meta charset="UTF-8">
			<meta name="viewport" content="width=device-width, initial-scale=1.0">
			<title>Teste da Requisição</title>
		</head>
		<body>
			<p>
				Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industrys standard 
				dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen 
				book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially
				unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, 
				and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
			</p>
		</body>
	</html>');
}
