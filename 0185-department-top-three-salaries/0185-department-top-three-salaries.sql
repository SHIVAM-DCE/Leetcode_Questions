SELECT 
    d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary
FROM 
    Employee e 
JOIN 
    Department d ON e.departmentId = d.id
WHERE 
    e.salary >= (
        SELECT MIN(salary) 
        FROM (
            SELECT DISTINCT e2.salary 
            FROM Employee e2 
            WHERE e2.departmentId = e.departmentId   -- This links it per department
            ORDER BY e2.salary DESC 
            LIMIT 3
        ) AS top_three_salaries
    )
ORDER BY 
    d.name;