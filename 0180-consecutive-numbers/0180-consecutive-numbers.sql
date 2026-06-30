-- # Write your MySQL query statement below
--
-- select distinct l1.num as ConsecutiveNums
-- from Logs l1
-- join logs l2 on l2.id=l1.id+1
-- join logs l3 on l3.id=l1.id+2
-- where l1.num=l2.num
-- and l2.num=l3.num; 

#--window function appproach
select distinct num as ConsecutiveNums
from (select num,
        id-row_number() over(partition by num order by id) as grp
        from logs
    ) as t
group by num,grp
having count(*)>=3