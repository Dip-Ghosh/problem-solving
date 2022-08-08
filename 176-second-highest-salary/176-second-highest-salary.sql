# select max(Salary) as SecondHighestSalary
# from Employee 
# where Salary < (select max(Salary) from Employee)

select IFNULL(

  (select distinct salary from employee order by salary desc limit 1 offset 1) , NULL
) as SecondHighestSalary