# Write your MySQL query statement below
# select 
# employee_id,
# #case when (employee_id % 2 !== 0  and  name not like 'M%' ) then salary else 0 end as bonus
# IF (employee_id%2 AND name not like "M%", salary, 0) as bonus
# from Employees

select employee_id, 
case 
    when employee_id%2 != 0 and name NOT LIKE 'M%' then salary
    else 0
end as bonus
from employees order by employee_id;