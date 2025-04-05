public class AlunoDisciplina {
    private String matricula;
    private String nome;
    private double notaProva1;
    private double notaProva2;
    private double notaTrabalho;

    // Construtor
    public AlunoDisciplina(String matricula, String nome, double notaProva1, double notaProva2, double notaTrabalho) {
        this.matricula = matricula;
        this.nome = nome;
        this.notaProva1 = notaProva1;
        this.notaProva2 = notaProva2;
        this.notaTrabalho = notaTrabalho;
    }

    // Método para calcular a nota total (cada prova vale 3 pontos e o trabalho vale 4)
    public double notaTotal() {
        return (notaProva1 * 0.03) + (notaProva2 * 0.03) + (notaTrabalho * 0.04);
    }

    // Método para verificar se o aluno foi aprovado (>= 60%)
    public boolean isAprovado() {
        return notaTotal() >= 6.0; // 60% de 10 pontos = 6.0
    }

    // Getters e Setters
    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getNotaProva1() {
        return notaProva1;
    }

    public void setNotaProva1(double notaProva1) {
        this.notaProva1 = notaProva1;
    }

    public double getNotaProva2() {
        return notaProva2;
    }

    public void setNotaProva2(double notaProva2) {
        this.notaProva2 = notaProva2;
    }

    public double getNotaTrabalho() {
        return notaTrabalho;
    }

    public void setNotaTrabalho(double notaTrabalho) {
        this.notaTrabalho = notaTrabalho;
    }
}

// teste feito
//será?
