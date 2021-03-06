#include "aluno.h"
#include <string.h>

int __compare_aluno(aluno_t aluno1, aluno_t aluno2) {
  if (aluno1.nota > aluno2.nota) {
    return 1;
  } else if (aluno1.nota < aluno2.nota) {
    return -1;
  } else {
    return 0;
  }
}

void __to_string_aluno(aluno_t aluno) {
  printf("\nNome: %sMatricula: %sNota: %lf\nGrupo: %d\n", aluno.nome, aluno.matricula, aluno.nota, aluno.grupo);
}

void aluno_init(aluno_t* aluno, double nota, char *nome, char *matricula, int grupo) {
  aluno->nota = nota;
  strcpy(aluno->nome, nome);
  strcpy(aluno->matricula, matricula);
  aluno->grupo = grupo;
}
