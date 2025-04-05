public class Main {
    public static void main(String[] args) {
        // Criando um aluno
        AlunoDisciplina aluno = new AlunoDisciplina("20230001", "Maria Oliveira", 80.0, 75.0, 90.0);

        // Calculando e exibindo a nota total
        System.out.println("Nota total: " + aluno.notaTotal());

        // Verificando se o aluno foi aprovado
        if (aluno.isAprovado()) {
            System.out.println("Aluno aprovado!");
        } else {
            System.out.println("Aluno reprovado.");
        }
    }
}