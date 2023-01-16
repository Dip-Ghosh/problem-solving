#approach 1

select max(Salary) as SecondHighestSalary
from Employee 
where Salary < (select max(Salary) from Employee)

#approach 2

# select IFNULL(
#   (select distinct salary from employee order by salary desc limit 1 offset 1) , NULL
# ) as SecondHighestSalary

#approach 3

# select (
#  select distinct salary from employee order by salary desc limit 1 offset 1
# ) as SecondHighestSalary