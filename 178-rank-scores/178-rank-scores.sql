/* Write your T-SQL query statement below */
select 
    a.score Score,
    (select 
        count(distinct b.score)+1 
     from scores b 
     where a.score < b.score) Rank 
from scores a 
order by a.score desc;