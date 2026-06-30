-- SELECT 
--     d.name AS Department,
--     e.name AS Employee,
--     e.salary AS Salary
-- FROM 
--     Employee e 
-- JOIN 
--     Department d ON e.departmentId = d.id
-- WHERE 
--     e.salary >= (
--         SELECT MIN(salary) 
--         FROM (
--             SELECT DISTINCT e2.salary 
--             FROM Employee e2 
--             WHERE e2.departmentId = e.departmentId   -- This links it per department
--             ORDER BY e2.salary DESC 
--             LIMIT 3
--         ) AS top_three_salaries
--     )
-- ORDER BY 
--     d.name;


with ranked_salaries as (
    select e.name as Employee,
    e.salary as Salary,
    e.departmentId,
    dense_rank() over(
                        partition by e.departmentId
                        order by e.salary desc)
    as salary_rank
from employee e)

select d.name as department,
    rs.employee,
    rs.salary
from ranked_salaries rs
join department d on rs.departmentId=d.id
where rs.salary_rank <= 3
order by d.name, rs.salary;