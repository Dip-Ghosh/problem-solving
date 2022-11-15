# Write your MySQL query statement below

select
d.name as Department,
e.name as Employee,
e.salary as Salary
from Employee e
left join department d on e.departmentId = d.id
where 3 >
(select count(distinct salary) from Employee where Employee.departmentId = e.departmentId
 and Employee.salary > e.salary)
 