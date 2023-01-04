# Write your MySQL query statement below
select distinct(a.num) as ConsecutiveNums
from Logs a, Logs b, Logs c 
where a.id = b.id + 1 and a.num = b.num 
and 
a.id = c.id + 2 and a.num = c.num