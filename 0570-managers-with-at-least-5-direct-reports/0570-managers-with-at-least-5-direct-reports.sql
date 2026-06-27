# Write your MySQL query statement below
-- select e2.name
-- from employee e1 join employee e2
-- on e1.managerid=e2.id
-- group by e1.managerid
-- having count(e1.managerid)>=5;

select name from employee
where id in (select managerid from employee
             group by managerid
             having count(*)>=5 )