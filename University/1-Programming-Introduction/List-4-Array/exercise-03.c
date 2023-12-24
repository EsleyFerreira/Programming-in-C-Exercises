#include <stdio.h>

int main()
{
    /*
     3. A prefeitura de Olinda fez uma pesquisa na UniAESO com 1000 alunos,
     coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

      a) média do salário da população;
      b) média do número de filhos;
      c) maior e menor salário;
      d) percentual de habitantes com mais de 2 filhos.
    */

    float salary_avg, children_avg, percentage, highest_salary = 0, lowest_salary = 99999, salary_sum = 0, children_sum = 0, salaries[1000];
    int position, children[1000], more_than_2_children = 0;

    for (position = 1; position <= 1000; position++)
    {

        printf("\n\nEnter your salary: ");
        scanf("%f", &salaries[position]);
        printf("Digite sua quantidade de filhos: ");
        scanf("%d", &children[position]);

        salary_sum = +salaries[position];
        children_sum += children[position];
        if (salaries[position] >= highest_salary)
        {
            highest_salary = salaries[position];
        }
        if (salaries[position] >= lowest_salary)
        {
            lowest_salary = salaries[position];
        }
        if (children[position] > 2)
        {
            more_than_2_children++;
        }
        salary_avg = salary_sum / 1000;
        children_avg = children_sum / 1000;

        percentage = more_than_2_children * 100 / 1000;

        printf("\n Media salário: %.2f", salary_avg);

        printf("\n Media de alunos com 2 filhos: %.2f", children_avg);

        printf("\n Maior salário: %.2f", highest_salary);
        printf("\n Menor salário: %.2f", lowest_salary);

        printf("\n Percentual +2 filhos: %.2f %%", percentage);
    }
    return 0;
}