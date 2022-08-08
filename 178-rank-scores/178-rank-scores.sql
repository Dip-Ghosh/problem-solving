# SELECT S.Score, COUNT(S2.Score) as `Rank`
# FROM Scores S,
# (SELECT DISTINCT Score FROM Scores) S2
# WHERE S.Score<=S2.Score
# GROUP BY S.Id
# ORDER BY S.Score DESC;

select s.score, count( distinct s2.score) as `rank`
from Scores as s
join 
Scores as s2 on s2.score >= s.score
group by s.id
order by s.score desc